#ifndef SYSINFOWINDOWSIMPL_H
#define SYSINFOWINDOWSIMPL_H
#include "sysinfo.h"
#include <QtGlobal>
#include <QVector>

typedef struct _FILETIME FILETIME;

class SysInfoWindowsImpl : public SysInfo
{
public:
    SysInfoWindowsImpl();

    // SysInfo interface
    void init() override;
    double cpuLoadAverage() override;
    double memoryUsed() override;

private:
    QVector<qulonglong> cpuRawData();
    qulonglong convertFileTime(const FILETIME &filetime) const;

    QVector<qulonglong> mCpuLoadlastValues;
};

#endif // SYSINFOWINDOWSIMPL_H
