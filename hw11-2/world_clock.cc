#include "world_clock.h"

using namespace std;

WorldClock::WorldClock() { }

WorldClock::WorldClock(int hour, int minute, int second) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

WorldClock::~WorldClock() { }

void WorldClock::Tick(int seconds) {
    ticks = seconds;
}

bool WorldClock::SetTime(int hour, int minute, int second) {
    if(hour < 0 || hour >= 24 || minute < 0 || minute >= 60 || second < 0 || second >= 60) {
        cout << "INVALID SETTING: " << hour << ":" << minute
             << ":" << second << endl;
        return false;
    }
    else {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
        cout << *this;
        return true;
    }
}

bool WorldClock::SetTime(int ticks) {
    int cur_tick = hour * MINUTES_PER_HOUR * SECONDS_PER_MINUTE + 
                   minute * SECONDS_PER_MINUTE                  +
                   second;
    cur_tick += ticks;

    if(cur_tick < 0) {
        cout << "time not changed since total_tick < 0" << endl;
        return false;
    }

    while(cur_tick > DAY_SECONDS)
        cur_tick -= DAY_SECONDS;

    hour = cur_tick / (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
    cur_tick -= hour * (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);

    minute = cur_tick / SECONDS_PER_MINUTE;
    cur_tick -= minute * SECONDS_PER_MINUTE;

    second = cur_tick;
    
    return true; 
}

int WorldClock::getHour() const {
    return hour;
}

int WorldClock::getMinute() const {
    return minute;
}

int WorldClock::getSecond() const {
    return second;
}

int WorldClock::getTicks() const {
    return ticks;
}

void WorldClock::setS(string s) {
    int tmp_h, tmp_m, tmp_s;
    this->s = s;
    string tok;
    string x[3];
    istringstream iss(s);
    for(int i=0; i<3; i++) {
        getline(iss, tok, ':');
        x[i] = tok;
    }
    tmp_h = atoi(x[0].c_str());
    tmp_m = atoi(x[1].c_str());
    tmp_s = atoi(x[2].c_str());
    SetTime(tmp_h, tmp_m, tmp_s);
}

std::ostream& operator<<(std::ostream& os, const WorldClock& c) {
    os << "CURRENT SET TIME: " << c.getHour() << ":"
       << c.getMinute() << ":" << c.getSecond() << endl;
    return os;
}

std::istream& operator>>(std::istream& is, WorldClock& c) {    
    string s;
    is >> s;
    c.setS(s);
    return is;
}
