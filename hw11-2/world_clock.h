#ifndef WORLD_CLOCK_H
#define WORLD_CLOCK_H

#include <map>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <cstdlib>

#define SECONDS_PER_MINUTE      60
#define MINUTES_PER_HOUR        60
#define HOURS_PER_DAY           24
#define DAY_SECONDS             60*60*24

using namespace std;

class WorldClock {
    public:
        WorldClock();
        WorldClock(int hour, int minute, int second);
        ~WorldClock();
        void Tick(int seconds = 1);
        bool SetTime(int ticks);
        bool SetTime(int hour, int minute, int second);
        int getHour() const;
        int getMinute() const;
        int getSecond() const;
        int getTicks() const;
        void setS(string s);
    private:
        int hour;
        int minute;
        int second;
        int ticks;
        string s;
};

ostream& operator<<(ostream& os, const WorldClock& c);
istream& operator>>(istream& is, WorldClock& c);

#endif
