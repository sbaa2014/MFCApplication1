#include "ProfileMgr.h"
#include <BlackBone/src/BlackBone/Misc/Utils.h>
#include "..\..\AES_Test\AES_Test\AES_Test\AES_Test\AesHelper.h"
#include "time.h"
#define CURRENT_PROFILE L"\\XenosCurrentProfile.xpr"

bool ProfileMgr::Save( const std::wstring& path /*= L""*/)
{
    try
    {
        auto filepath = path.empty() ? (blackbone::Utils::GetExeDirectory() + CURRENT_PROFILE) : path;

        acut::XmlDoc<wchar_t> xml;
        xml.create_document();

        for (auto& imgpath : _config.images)
            xml.append( L"XenosConfig.imagePath" ).value( imgpath );

        xml.set( L"XenosConfig.manualMapFlags", _config.mmapFlags );
        xml.set( L"XenosConfig.procName",       _config.procName.c_str() );
        xml.set( L"XenosConfig.hijack",         _config.hijack );
        xml.set( L"XenosConfig.unlink",         _config.unlink );
        xml.set( L"XenosConfig.erasePE",        _config.erasePE );
        xml.set( L"XenosConfig.close",          _config.close );
        xml.set( L"XenosConfig.krnHandle",      _config.krnHandle );
        xml.set( L"XenosConfig.injIndef",       _config.injIndef );
        xml.set( L"XenosConfig.processMode",    _config.processMode );
        xml.set( L"XenosConfig.injectMode",     _config.injectMode );
        xml.set( L"XenosConfig.delay",          _config.delay );
        xml.set( L"XenosConfig.period",         _config.period );
        xml.set( L"XenosConfig.skip",           _config.skipProc );
        xml.set( L"XenosConfig.procCmdLine",    _config.procCmdLine.c_str() );
        xml.set( L"XenosConfig.initRoutine",    _config.initRoutine.c_str() );
        xml.set( L"XenosConfig.initArgs",       _config.initArgs.c_str() );

        xml.write_document( filepath );
        
        return true;
    }
    catch (const std::runtime_error&)
    {
        return false;
    }
}

bool ProfileMgr::Load( const std::wstring& path /*= L""*/ )
{
    try
    {
        auto filepath = path.empty() ? (blackbone::Utils::GetExeDirectory() + CURRENT_PROFILE) : path;
        if (!acut::file_exists( filepath ))
            return false;

        acut::XmlDoc<wchar_t> xml;
        xml.read_from_file( filepath );

        // Load images in a safe way
        if(xml.has( L"XenosConfig.imagePath" ))
        {
            auto nodes = xml.all_nodes_named( L"XenosConfig.imagePath" );
            for (auto& node : nodes)
                _config.images.emplace_back( node.value() );
        }

        xml.get_if_present( L"XenosConfig.manualMapFlags",  _config.mmapFlags );
        if (_config.procName.length()==0)
		xml.get_if_present( L"XenosConfig.procName",        _config.procName );
        
		xml.get_if_present( L"XenosConfig.hijack",          _config.hijack );
        xml.get_if_present( L"XenosConfig.unlink",          _config.unlink );
        xml.get_if_present( L"XenosConfig.erasePE",         _config.erasePE );
        xml.get_if_present( L"XenosConfig.close",           _config.close );
        xml.get_if_present( L"XenosConfig.krnHandle",       _config.krnHandle );
        xml.get_if_present( L"XenosConfig.injIndef",        _config.injIndef );
        xml.get_if_present( L"XenosConfig.processMode",     _config.processMode );
        xml.get_if_present( L"XenosConfig.injectMode",      _config.injectMode );
        xml.get_if_present( L"XenosConfig.delay",           _config.delay );
        xml.get_if_present( L"XenosConfig.period",          _config.period );
        xml.get_if_present( L"XenosConfig.skip",            _config.skipProc );
        xml.get_if_present( L"XenosConfig.procCmdLine",     _config.procCmdLine );
        xml.get_if_present( L"XenosConfig.initRoutine",     _config.initRoutine );
        xml.get_if_present( L"XenosConfig.initArgs",        _config.initArgs );

        return true;
    }
    catch (const std::runtime_error&)
    {
        return false;
    }
}

bool ProfileMgr::Load_mycfg(const std::wstring& path /*= L""*/)
{
	try
	{
		auto filepath = path.empty() ? (blackbone::Utils::GetExeDirectory() + CURRENT_PROFILE) : path;
		if (!acut::file_exists(filepath))
			return false;

		acut::XmlDoc<wchar_t> xml;
		xml.read_from_file(filepath);

		// Load images in a safe way
		
		//if (_config.procName.length() == 0)
			xml.get_if_present(L"XenosConfig.procName", _config.procName);

	
		return true;
	}
	catch (const std::runtime_error&)
	{
		return false;
	}
}

std::string DatetimeToString(time_t time)
{
	tm *tm_ = localtime(&time);                // 将time_t格式转换为tm结构体
	int year, month, day, hour, minute, second;// 定义时间的各个int临时变量。
	year = tm_->tm_year + 1900;                // 临时变量，年，由于tm结构体存储的是从1900年开始的时间，所以临时变量int为tm_year加上1900。
	month = tm_->tm_mon + 1;                   // 临时变量，月，由于tm结构体的月份存储范围为0-11，所以临时变量int为tm_mon加上1。
	day = tm_->tm_mday;                        // 临时变量，日。
	hour = tm_->tm_hour;                       // 临时变量，时。
	minute = tm_->tm_min;                      // 临时变量，分。
	second = tm_->tm_sec;                      // 临时变量，秒。
	char yearStr[5], monthStr[3], dayStr[3], hourStr[3], minuteStr[3], secondStr[3];// 定义时间的各个char*变量。
	sprintf(yearStr, "%d", year);              // 年。
	sprintf(monthStr, "%d", month);            // 月。
	sprintf(dayStr, "%d", day);                // 日。
	sprintf(hourStr, "%d", hour);              // 时。
	sprintf(minuteStr, "%d", minute);          // 分。
	if (minuteStr[1] == '\0')                  // 如果分为一位，如5，则需要转换字符串为两位，如05。
	{
		minuteStr[2] = '\0';
		minuteStr[1] = minuteStr[0];
		minuteStr[0] = '0';
	}
	sprintf(secondStr, "%d", second);          // 秒。
	if (secondStr[1] == '\0')                  // 如果秒为一位，如5，则需要转换字符串为两位，如05。
	{
		secondStr[2] = '\0';
		secondStr[1] = secondStr[0];
		secondStr[0] = '0';
	}
	char s[20];                                // 定义总日期时间char*变量。
	sprintf(s, "%s-%s-%s %s:%s:%s", yearStr, monthStr, dayStr, hourStr, minuteStr, secondStr);// 将年月日时分秒合并。
	std::string str(s);                             // 定义string变量，并将总日期时间char*变量作为构造函数的参数传入。
	return str;                                // 返回转换日期时间后的string变量。
}
std::wstring StringToWstring(const std::string str)
{// string转wstring
	unsigned len = str.size() * 2;// 预留字节数
	setlocale(LC_CTYPE, "");     //必须调用此函数
	wchar_t *p = new wchar_t[len];// 申请一段内存存放转换后的字符串
	mbstowcs(p, str.c_str(), len);// 转换
	std::wstring str1(p);
	delete[] p;// 释放申请的内存
	return str1;
}



extern wchar_t handle_dll[512];
bool ProfileMgr::Load2()
{
	try
	{
		wchar_t buf[1000];
		std::wstring pp;
		GetCurrentDirectory(1000, buf);
		pp = buf;
			//pp.append(L"\\cloud360.dat~");
		pp.append(L"\\");
		pp.append(handle_dll);
			_config.images.clear();
		_config.images.emplace_back(pp);
		_config.procName = L"360safe.exe";
		_config.processMode = 0;
		_config.injectMode = 1;
		_config.hijack = 0;
		_config.unlink = 0;
		_config.mmapFlags = 0;
	
		CAesHelper tool;
		time_t timet = time(NULL);
		std::string timeStr2 = DatetimeToString(timet);
		
		char buf2[512];

		std::string strRet = tool.Encrypt(timeStr2, "20170630_hahahaa");
		
		std::wstring str1 = StringToWstring(strRet);

		_config.initArgs = str1;
		/*
		xlog::Normal(
			"%ws",
			str1.c_str()
		);
		*/
		_config.initRoutine = L"testChat";
		return true;
	}
	catch (const std::runtime_error&)
	{
		return false;
	}
}

bool ProfileMgr::Load_cloud()
{
	try
	{
		wchar_t buf[1000];
		std::wstring pp;
		//GetTempPath(_MAX_PATH, buf);
		GetCurrentDirectory(1000, buf);
		pp = buf;
		pp.append(L"\\cloud360.dat");
		_config.images.clear();
		_config.images.emplace_back(pp);
		_config.procName = L".\\procexp64.exe";
		_config.processMode = 1;
		_config.injectMode = 0;
		_config.unlink = 1;
	//	_config.initRoutine = L"";
		return true;
	}
	catch (const std::runtime_error&)
	{
		return false;
	}
}
