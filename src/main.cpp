#include <iostream>
#include <thread>
#include <chrono>

#include "../include/cpu_monitor.h"
#include "../include/memory_monitor.h"
#include "../include/disk_monitor.h"
#include "../include/process_monitor.h"
#include "../include/docker_monitor.h"
#include "../include/dashboard.h"

int main() {

    CpuMonitor cpu;
    MemoryMonitor memory;
    DiskMonitor disk;
    ProcessMonitor processMonitor;
    DockerMonitor dockerMonitor;
    

    while (true) {

        float cpuUsage = cpu.getCpuUsage();
        float memoryUsage = memory.getMemoryUsage();
        float diskUsage = disk.getDiskUsage();

        std::cout << "======================================" << std::endl;
        std::cout << "         InfraPulse Monitor           " << std::endl;
        std::cout << "======================================" << std::endl;

        std::cout << "CPU Usage: " << cpuUsage << "%" << std::endl;

        std::cout << "Memory Usage: " << memory.getMemoryUsage() << "%" << std::endl;

        std::cout << "Disk Usage: " << disk.getDiskUsage() << "%" << std::endl;

        std::cout << "Process Count  : " << processes.size() << std::endl;

        std::cout << "======================================" << std::endl;
        std::cout << "Top Processes" << std::endl;
        std::cout << "======================================" << std::endl;

        int count = 0;

        for (const auto& process : processes) {

            std::cout << "PID: " << process.pid
                      << " | Name: " << process.name
                      << std::endl;

            count++;

            if (count >= 5)
                break;
        }

        std::cout << "\n======================================" << std::endl;
        std::cout << "Docker Containers" << std::endl;
        std::cout << "======================================" << std::endl;

        dockerMonitor.showContainers();

        std::cout << "\nRefreshing in 1 second..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}