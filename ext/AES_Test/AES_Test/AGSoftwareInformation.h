#pragma once
#include <map>

// 搜集运行进程信息，安装软件信息
#include "AGDBTableSoftwareInfo.h"

class AGUserDatabase;

class AGJsonHelper;

class AGSoftwareInformation 
{
public:
  ~AGSoftwareInformation(void);

  void UpdateSoftwareList();
  std::string GetSoftwareListJsonToUpload();
  void CleanSoftwareListUploaded();

  static AGSoftwareInformation* GetInst();

private:
  AGSoftwareInformation(void);
  static AGSoftwareInformation m_Inst;

  typedef INSTALLATIONINFO theSWINFO;
  typedef std::map<std::string, theSWINFO> theSWINFOMAP;
  theSWINFOMAP mSWInfoList;

  bool SearchRegistry(HKEY key,TCHAR* pSubKey,theSWINFOMAP& d );
  bool GetOneUnstallInfo( HKEY key, TCHAR* pSubKey,theSWINFO& si );
  void SaveToDB(AGUserDatabase*db,theSWINFOMAP& d );
  void LoadChangedListDB(AGUserDatabase*db,theSWINFOMAP& d );
  void MarkToDB(AGUserDatabase*db,theSWINFOMAP& d );
  std::string GetUniqueKeyid(const theSWINFO &d);
  std::string FormatSoftwareList(theSWINFOMAP& d );

};
