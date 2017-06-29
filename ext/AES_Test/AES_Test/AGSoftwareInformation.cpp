#include "stdafx.h"
#include "memoryleak.h"
#include "AGSoftwareInformation.h"
#include <TlHelp32.h>
#include <psapi.h>
#include "AGStringCodec.h"
#include "AGJsonHelper.h"
#include "AGDeviceInfomation.h"
#include "AGNetLogHelper.h"
#include "AGUser.h"
#include <string>
#include <sstream>
#include "AGAppDatabase.h"
#include "AGUserdatabase.h"
#include "AGDBTableSoftwareList.h"

#define MAX_KEY_LENGTH 255
#define MAX_VALUE_NAME 16383

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

namespace SoftwareInfoConst {

const TCHAR* cRegDispName = _T("DisplayName");
const TCHAR* cRegDispVersion = _T("DisplayVersion");
const TCHAR* cRegInstDate = _T("InstallDate");
const TCHAR* cRegVendor = _T("Publisher");

const std::string cDispName = "SWDisplayName";
const std::string cDispVersion = "SWDisplayVersion";
const std::string cInstDate = "SWInstDate";
const std::string cVendor = "SWVender";
const std::string cHashid = "SWHashid";

const std::string cSoftwareList = "AppListArray";
const std::string cSoftwareCount = "AppListArrayCount";

const std::string cUserName = "userName";
const std::string cUserID = "userId";
const std::string cDeviceNO = "deviceNo";
const std::string cTStamp = "timeStamp";
const std::string cJsontype = "jsonType";

const std::string cJsonTypeSoftwareList = "2";

class AGLogUserInfoHelper
{
public:
  AGLogUserInfoHelper(void);
  ~AGLogUserInfoHelper(void);
  void AppendUserInfo( AGJsonHelper* pTool );

};

AGLogUserInfoHelper::AGLogUserInfoHelper(){}
AGLogUserInfoHelper::~AGLogUserInfoHelper(){}
void AGLogUserInfoHelper::AppendUserInfo( AGJsonHelper* pTool )
{
  // 上传时附带当前的用户信息
  AGNetLogHelper hp;
  std::string strUserName = appcurUser->getDB("username");
  std::string strUserID = appcurUser->getDB("userid");
  std::string strDeviceNo = gdevinfo->GetDeviceNumber();
  std::string strTimeStamp = hp.timestampNowWithZone();
  std::string keyname = SoftwareInfoConst::cUserName;
  std::string keyuid = SoftwareInfoConst::cUserID;
  std::string keydid = SoftwareInfoConst::cDeviceNO;
  std::string keytime = SoftwareInfoConst::cTStamp;

  pTool->SetString( keyname, strUserName );
  pTool->SetString( keyuid, strUserID );
  pTool->SetString( keydid, strDeviceNo );
  pTool->SetString( keytime, strTimeStamp );
}


}


AGSoftwareInformation AGSoftwareInformation::m_Inst;
AGSoftwareInformation* AGSoftwareInformation::GetInst()
{
  return &m_Inst;
}
AGSoftwareInformation::AGSoftwareInformation(void)
{
}


AGSoftwareInformation::~AGSoftwareInformation(void)
{

}


void AGSoftwareInformation::UpdateSoftwareList()
{
  mSWInfoList.clear();
 // 需要关注32/64位，以及HKLM/HKCU，qt creator就是安装在HKCU下
  TCHAR* pSubKey1 = _T("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall");
  TCHAR* pSubKey2 = _T("SOFTWARE\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Uninstall");
  SearchRegistry(HKEY_LOCAL_MACHINE, pSubKey1,mSWInfoList);
  SearchRegistry(HKEY_LOCAL_MACHINE, pSubKey2,mSWInfoList);
  SearchRegistry(HKEY_CURRENT_USER, pSubKey1,mSWInfoList);
  SearchRegistry(HKEY_CURRENT_USER, pSubKey2,mSWInfoList);

  SaveToDB(appUserDB,mSWInfoList);
  mSWInfoList.clear();
  return ;
}

std::string AGSoftwareInformation::GetSoftwareListJsonToUpload()
{
  mSWInfoList.clear();
  this->LoadChangedListDB(appUserDB,mSWInfoList);
  std::string str = FormatSoftwareList(mSWInfoList);
  return str;
}
void AGSoftwareInformation::CleanSoftwareListUploaded()
{
  this->MarkToDB(appUserDB,mSWInfoList);
  mSWInfoList.clear();
  return ;
}

std::string AGSoftwareInformation::FormatSoftwareList(theSWINFOMAP& d )
{
  int count = d.size();
  if ( count <=0 ) return std::string("");

  std::string kDispName = SoftwareInfoConst::cDispName;
  std::string kDispVersion = SoftwareInfoConst::cDispVersion;
  std::string kInstDate = SoftwareInfoConst::cInstDate;
  std::string kVendor = SoftwareInfoConst::cVendor;
  std::string kHashid = SoftwareInfoConst::cHashid;

  std::string kArrayName = SoftwareInfoConst::cSoftwareList;
  std::string kArrayCount =  SoftwareInfoConst::cSoftwareCount;
  std::string kJsonType = SoftwareInfoConst::cJsontype;

  AGJsonHelper tool;
  theSWINFOMAP::iterator it = d.begin();
  for( ; it != d.end(); ++it )
  {

    tool.AppendTempArrayObject(kDispName,
    it->second.swDispName );
    tool.AppendTempArrayObject(kDispVersion,
    it->second.swDispVersion );
    tool.AppendTempArrayObject(kInstDate,
    it->second.swInstDate );
    tool.AppendTempArrayObject(kVendor,
    it->second.swVendor );
    tool.AppendTempArrayObject(kHashid,
    it->second.swHashid );
    tool.AppendArray(kArrayName );
  
  }

  std::stringstream ss;
  ss << d.size();
  tool.SetString(kArrayCount,ss.str() );
  tool.SetString(kJsonType,SoftwareInfoConst::cJsonTypeSoftwareList );
  
  SoftwareInfoConst::AGLogUserInfoHelper h;
  h.AppendUserInfo( &tool );

  return tool.ToStdString();
}

bool AGSoftwareInformation::SearchRegistry(HKEY rootKey, TCHAR* pSubKey,theSWINFOMAP& d)
{
  // 注册表结构：Key包含（key,value）value是一个键值对里的Key，再查询一次才是真正的value
  HKEY hKey = NULL;
  long lResult = ::RegOpenKeyEx(rootKey, pSubKey, 0, KEY_READ, &hKey);
  if( lResult == ERROR_SUCCESS )
  {
  TCHAR achKey[MAX_KEY_LENGTH];// buffer for subkey name
  DWORD cbName; // size of name string
  TCHAR achClass[MAX_PATH] = TEXT("");  // buffer for class name
  DWORD cchClassName = MAX_PATH;  // size of class string
  DWORD cSubKeys=0;// number of subkeys
  DWORD cbMaxSubKey;  // longest subkey size
  DWORD cchMaxClass;  // longest class string
  DWORD cValues;  // number of values for key
  DWORD cchMaxValue; // longest value name
  DWORD cbMaxValueData; // longest value data
  DWORD cbSecurityDescriptor; // size of security descriptor
  FILETIME ftLastWriteTime;// last write time

  DWORD i, retCode;

  // Get the class name and the value count.
  retCode = RegQueryInfoKey(
   hKey,  // key handle
   achClass, // buffer for class name
   &cchClassName,  // size of class string
   NULL,     // reserved
   &cSubKeys,   // number of subkeys
   &cbMaxSubKey,   // longest subkey size
   &cchMaxClass,   // longest class string
   &cValues,    // number of values for this key
   &cchMaxValue,   // longest value name
   &cbMaxValueData,   // longest value data
   &cbSecurityDescriptor,   // security descriptor
   &ftLastWriteTime);    // last write time

  // Enumerate the subkeys, until RegEnumKeyEx fails.
  if (cSubKeys)
  {
    for (i=0; i<cSubKeys; i++)
    {
      cbName = MAX_KEY_LENGTH;
      retCode = RegEnumKeyEx(hKey, i,
         achKey,
         &cbName,
         NULL,
         NULL,
         NULL,
         &ftLastWriteTime);
      if (retCode == ERROR_SUCCESS)
      {
        theSWINFO si;
        bool ok = false;
        ok = GetOneUnstallInfo(hKey, achKey,si);
        if( ok )
          {
            si.swHashid = std::string("");
            //si.m_strUserID = si.uniquekey();
            si.swKeyid = GetUniqueKeyid(si);
            d[si.swKeyid] = si;
        }
      }
    }
  }

  RegCloseKey(hKey);
  return true;

  }
  return false;
}


bool AGSoftwareInformation::GetOneUnstallInfo(HKEY parentkey, TCHAR *pSubKey,theSWINFO& si)
{
  bool bRet = false;
  HKEY hKey = NULL;
  long lResult = ::RegOpenKeyEx(parentkey, pSubKey, 0, KEY_READ, &hKey);
  if( lResult == ERROR_SUCCESS )
  {
  //TCHAR achKey[MAX_KEY_LENGTH];// buffer for subkey name
  //DWORD cbName; // size of name string
  TCHAR achClass[MAX_PATH] = TEXT("");  // buffer for class name
  DWORD cchClassName = MAX_PATH;  // size of class string
  DWORD cSubKeys=0;// number of subkeys
  DWORD cbMaxSubKey;  // longest subkey size
  DWORD cchMaxClass;  // longest class string
  DWORD cValues;  // number of values for key
  DWORD cchMaxValue; // longest value name
  DWORD cbMaxValueData; // longest value data
  DWORD cbSecurityDescriptor; // size of security descriptor
  FILETIME ftLastWriteTime;// last write time

  DWORD i, retCode;

  TCHAR szBuffer[255] = { 0 };
  TCHAR szIndex[20] = {0};

  TCHAR achValue[MAX_VALUE_NAME];
  DWORD cchValue = MAX_VALUE_NAME;

  // Get the class name and the value count.
  retCode = RegQueryInfoKey(
   hKey,  // key handle
   achClass, // buffer for class name
   &cchClassName,  // size of class string
   NULL,     // reserved
   &cSubKeys,   // number of subkeys
   &cbMaxSubKey,   // longest subkey size
   &cchMaxClass,   // longest class string
   &cValues,    // number of values for this key
   &cchMaxValue,   // longest value name
   &cbMaxValueData,   // longest value data
   &cbSecurityDescriptor,   // security descriptor
   &ftLastWriteTime);    // last write time
  // Enumerate the key values.

  if (cValues)
  {
   for (i=0, retCode=ERROR_SUCCESS; i<cValues; i++)
   {
    cchValue = MAX_VALUE_NAME;
    achValue[0] = _T('\0');
    retCode = RegEnumValue(hKey, i,
     achValue,
     &cchValue,
     NULL,
     NULL,
     NULL,
     NULL);

    if (retCode == ERROR_SUCCESS )
    {
      DWORD dwType = REG_BINARY | REG_DWORD | REG_EXPAND_SZ | REG_MULTI_SZ | REG_NONE | REG_SZ;
     DWORD dwNameLen = 255;
     retCode = RegQueryValueEx(hKey, achValue, 0, &dwType, (LPBYTE)szBuffer, &dwNameLen);
     if (retCode == ERROR_SUCCESS)
     {
      if( achValue )
      {
       if( _tcscmp(achValue, SoftwareInfoConst::cRegDispName) == 0 )
       {
        si.swDispName = AGStringCodec::UnicodeToUtf8( szBuffer );
       }
       else if( _tcscmp(achValue, SoftwareInfoConst::cRegDispVersion) == 0 )
       {
        si.swDispVersion = AGStringCodec::UnicodeToUtf8( szBuffer );
       }
       else if( _tcscmp(achValue, SoftwareInfoConst::cRegInstDate) == 0 )
       {
        si.swInstDate = AGStringCodec::UnicodeToUtf8( szBuffer );
       }
       else if( _tcscmp(achValue, SoftwareInfoConst::cRegVendor) == 0 )
       {
        si.swVendor = AGStringCodec::UnicodeToUtf8( szBuffer );
       }
      }
     }
    }
   }

   if( ! si.swDispName.empty() )
     bRet = true;

  }//keys
  }
  RegCloseKey(hKey);
  return bRet;
}

std::string AGSoftwareInformation::GetUniqueKeyid(const theSWINFO &d)
{
  std::string uniqueKey = d.swDispName + d.swDispVersion + d.swHashid;
  return uniqueKey;
}

void AGSoftwareInformation::SaveToDB(AGUserDatabase* db,theSWINFOMAP& d )
{
  if( db)
  {
    db->saveChangedSoftwareInfo(&d);
  }
}
void AGSoftwareInformation::MarkToDB(AGUserDatabase* db,theSWINFOMAP& d )
{
  if( db)
  {
    db->markSoftwareInfo(&d);
  }
}

void AGSoftwareInformation::LoadChangedListDB(AGUserDatabase*db,theSWINFOMAP& d )
{
  if( db)
  {
    db->loadChangedSoftwareInfo(&d);
  }
  return ;
}

