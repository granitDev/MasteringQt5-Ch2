#include "sysinfo.h"
#include <QtGlobal>

#ifdef Q_OS_WIN
    #include "sysinfowindowsimpl.h"
#elif defined(Q_OS_LINUX)
    #include "sysinfolinuxsimpl.h"
#endif



SysInfo &SysInfo::instance()
{
    #ifdef Q_OS_WIN
        static SysInfoWindowsImpl singlton;
    #elif defined(Q_OS_LINUX)
        static SysInfoLinuxImpl singlton;
    #endif

    return singlton;
}

SysInfo::SysInfo()
{

}
SysInfo::~SysInfo()
{

}
