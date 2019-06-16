
#include <iostream>
#include <string.h>
#include "minimal_fighter.h"

using namespace std;

MinimalFighter::MinimalFighter() {
    mHp = 0;
    mPower = 0;
    mStatus = Invalid;
}

MinimalFighter::MinimalFighter(int _hp, int _power) {
    mHp = _hp;
    mPower = _power;
    if(_hp <= 0)
        mStatus = Dead;    
    else
        mStatus = Alive;
}

int MinimalFighter::hp() const {
    return mHp;
}

int MinimalFighter::power() const {
    return mPower;
}

FighterStatus MinimalFighter::status() const {
    return mStatus;
}

void MinimalFighter::setHp(int _hp) {
    mHp = _hp;
}

void MinimalFighter::setPower(int _power) {
    mPower = _power;
}

void MinimalFighter::setStatus(FighterStatus _status) {
    mStatus = _status;
}

/*
void MinimalFighter::hit(MinimalFighter* _enemy) {
    int aftHp = _enemy->hp() - power();
    if(aftHp <= 0) {
        _enemy->setHp(0);
        _enemy->setStatus(Dead);
    } else {
        _enemy->setHp(aftHp);
    }
}*/

void MinimalFighter::hit(MinimalFighter* _enemy) {
    if(hp() <= 0) {
        cout << "(H) fighter is already dead." << endl;
    } else {
        if(_enemy->hp() <= 0) {
            cout << "(H) target is already dead." << endl;
        } else {
            int aftHp = _enemy->hp() - power();
            if(aftHp <= 0) {
                _enemy->setHp(0);
                _enemy->setStatus(Dead);
            } else {
                _enemy->setHp(aftHp);
            }
            int aftHp2 = hp() - _enemy->power();
            if(aftHp2 <= 0) {
                setHp(0);
                setStatus(Dead);
            } else {
                setHp(aftHp2);
            }
        }
    }
}

void MinimalFighter::attack(MinimalFighter* _target) {
    if(hp() <= 0) {
        cout << "(A) fighter is already dead" << endl;
    } else {
        if(_target->hp() <= 0) {
            cout << "(A) target is already dead" << endl;
        } else {
            int aftHp = _target->hp() - power();
            if(aftHp <= 0) {
                _target->setHp(0);
                _target->setPower(0);
                _target->setStatus(Dead);
                setPower(0);
            } else {
                _target->setHp(aftHp);
                setPower(0);
            }
        }
    }
}

void MinimalFighter::fight(MinimalFighter* _enemy) {
    if(hp() != 0 && _enemy->hp() != 0) {
        do {
            hit(_enemy);
        } while(status() != 2 && _enemy->status() != 2);
    } else {
        cout << "(F) at least one of them is already dead." << endl;
    }
}

string MinimalFighter::print() {
    if(status() == 2 || hp() == 0)
        return "DEAD";
    else
        return "H" + to_string(hp()) + " P" + to_string(power());
}
