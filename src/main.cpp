#include <iostream>
#include <thread>
#include <chrono>

#include "../include/cpu_monitor.h"
#include "../include/memory_monitor.h"
#include "../include/disk_monitor.h"

int main() {

    CpuMonitor cpu;
    MemoryMonitor memory;
    DiskMonitor disk;

    while (true) {

        float cpuUsage = cpu.getCpuUsage();

        std::cout << "CPU Usage: " << cpuUsage << "%" << std::endl;

        std::cout << "Memory Usage: " << memory.getMemoryUsage() << "%" << std::endl;

        std::cout << "Disk Usage: " << disk.getDiskUsage() << "%" << std::endl;

        std::cout << "------------------------" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}