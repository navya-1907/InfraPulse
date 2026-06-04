#include "../include/memory_monitor.h"

#include <fstream>
#include <string>

float MemoryMonitor::getMemoryUsage() {

    std::ifstream file("/proc/meminfo");

    std::string key;

    long value;

    std::string unit;

    long totalMemory = 0;
    long freeMemory = 0;

    while (file >> key >> value >> unit) {

        if (key == "MemTotal:")
            totalMemory = value;

        if (key == "MemAvailable:")
            freeMemory = value;
    }

    long usedMemory = totalMemory - freeMemory;

    return (100.0 * usedMemory) / totalMemory;
}