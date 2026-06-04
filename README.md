# InfraPulse

A real-time Linux system monitoring platform built using C++ that provides insights into CPU, Memory, Disk, Process, and Docker container utilization.

## Features

### System Monitoring
- CPU Usage Monitoring
- Memory Usage Monitoring
- Disk Usage Monitoring

### Process Monitoring
- Running Process Discovery
- Process Count Tracking
- Top Running Processes

### Docker Monitoring
- Running Docker Container Detection
- Container Information Display

### Real-Time Monitoring
- Live Metrics Refresh
- Console-Based Monitoring Interface

---

## Tech Stack

- C++
- Linux
- STL (Standard Template Library)
- Docker
- CMake
- Git & GitHub

---

## Project Structure

```text
InfraPulse/
│
├── include/
│   ├── cpu_monitor.h
│   ├── memory_monitor.h
│   ├── disk_monitor.h
│   ├── process_monitor.h
│   └── docker_monitor.h
│
├── src/
│   ├── main.cpp
│   ├── cpu_monitor.cpp
│   ├── memory_monitor.cpp
│   ├── disk_monitor.cpp
│   ├── process_monitor.cpp
│   └── docker_monitor.cpp
│
├── CMakeLists.txt
├── README.md
└── .gitignore
```

---

## How It Works

### CPU Monitoring

Reads CPU statistics from:

```bash
/proc/stat
```

and calculates CPU utilization percentage.

### Memory Monitoring

Reads memory information from:

```bash
/proc/meminfo
```

and calculates memory usage percentage.

### Disk Monitoring

Uses Linux filesystem statistics to calculate:

- Total Disk Space
- Used Disk Space
- Disk Usage Percentage

### Process Monitoring

Scans:

```bash
/proc
```

to discover active processes and retrieve process information.

### Docker Monitoring

Uses:

```bash
docker ps
```

to display running Docker containers.

---

## Build Instructions

### Clone Repository

```bash
git clone https://github.com/navya-1907/InfraPulse.git
cd InfraPulse
```

### Create Build Directory

```bash
mkdir build
cd build
```

### Build Project

```bash
cmake ..
make
```

### Run

```bash
./InfraPulse
```

---

## Sample Output

```text
======================================
         InfraPulse Monitor
======================================

CPU Usage      : 18.5%
Memory Usage   : 42.3%
Disk Usage     : 61.1%
Process Count  : 274

======================================
Top Processes
======================================

PID: 1     | Name: systemd
PID: 532   | Name: bash
PID: 1023  | Name: docker
PID: 2021  | Name: code
PID: 3045  | Name: InfraPulse

======================================
Docker Containers
======================================

CONTAINER ID   IMAGE      STATUS
...
```

---

## Learning Outcomes

This project helped in understanding:

- Linux System Programming
- Linux `/proc` Filesystem
- Process Management
- Docker Integration
- Modular C++ Design
- Build Systems using CMake
- Git and GitHub Workflow

---

## Future Enhancements

- Multi-threaded Monitoring Engine
- Alert Management System
- SQLite-Based Metrics Storage
- Historical Metrics Tracking
- Remote Monitoring via TCP Sockets
- Log Monitoring and Analysis
- Web Dashboard

---

## Author

**Navya Srivastava**

