#include "../include/cpu_monitor.h"

#include <fstream>
#include <sstream>

CpuMonitor::CpuMonitor() {
    prevIdle = 0;
    prevTotal = 0;
}

float CpuMonitor::getCpuUsage() {

    std::ifstream file("/proc/stat");

    std::string line;

    getline(file, line);

    std::stringstream ss(line);

    std::string cpu;

    long user, nice, system, idle, iowait, irq, softirq, steal;

    ss >> cpu >> user >> nice >> system >> idle >> iowait >> irq >> softirq >> steal;

    long idleTime = idle + iowait;

    long totalTime = user + nice + system + idle + iowait + irq + softirq + steal;

    long totalDiff = totalTime - prevTotal;

    long idleDiff = idleTime - prevIdle;

    prevTotal = totalTime;

    prevIdle = idleTime;

    if (totalDiff == 0)
        return 0;

    return 100.0 * (totalDiff - idleDiff) / totalDiff;
}