#include <iostream>
#include <thread>
#include <chrono>

#include "../include/cpu_monitor.h"
#include "../include/memory_monitor.h"
#include "../include/disk_monitor.h"
<<<<<<< HEAD
#include "../include/process_monitor.h"
#include "../include/docker_monitor.h"
#include "../include/dashboard.h"
=======
>>>>>>> 6cb9bbcce20c7ac5b27c20f74694065e9252f74a

int main() {

    CpuMonitor cpu;
    MemoryMonitor memory;
    DiskMonitor disk;
<<<<<<< HEAD
    ProcessMonitor processMonitor;
    DockerMonitor dockerMonitor;
    
=======
>>>>>>> 6cb9bbcce20c7ac5b27c20f74694065e9252f74a

    while (true) {

        float cpuUsage = cpu.getCpuUsage();
<<<<<<< HEAD
        float memoryUsage = memory.getMemoryUsage();
        float diskUsage = disk.getDiskUsage();

        std::cout << "======================================" << std::endl;
        std::cout << "         InfraPulse Monitor           " << std::endl;
        std::cout << "======================================" << std::endl;
=======
>>>>>>> 6cb9bbcce20c7ac5b27c20f74694065e9252f74a

        std::cout << "CPU Usage: " << cpuUsage << "%" << std::endl;

        std::cout << "Memory Usage: " << memory.getMemoryUsage() << "%" << std::endl;

        std::cout << "Disk Usage: " << disk.getDiskUsage() << "%" << std::endl;

<<<<<<< HEAD
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
=======
        std::cout << "------------------------" << std::endl;
>>>>>>> 6cb9bbcce20c7ac5b27c20f74694065e9252f74a
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}