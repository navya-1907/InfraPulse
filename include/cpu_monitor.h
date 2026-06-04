#ifndef CPU_MONITOR_H
#define CPU_MONITOR_H

class CpuMonitor {

    private:
        long prevIdle;
        long prevTotal;

    public:
        CpuMonitor();

        float getCpuUsage();
};

#endif