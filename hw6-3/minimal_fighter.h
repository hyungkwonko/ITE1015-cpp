#ifndef MINIMAL_FIGHTER_H
#define MINIMAL_FIGHTER_H

#include <iostream>
#include <string.h>

using namespace std;

enum FighterStatus {Invalid, Alive, Dead};

class MinimalFighter {
    private:
        int mHp;
        int mPower;
        enum FighterStatus mStatus;
    public:
        MinimalFighter();
        MinimalFighter(int _hp, int _power);
        int hp() const;
        int power() const;
        FighterStatus status() const;
        void setHp(int _hp);
        void setPower(int _power);
        void setStatus(FighterStatus _status);
        void hit(MinimalFighter* _enemy);
        void attack(MinimalFighter* _target);
        void fight(MinimalFighter* _enemy);
        string print();
};

#endif
