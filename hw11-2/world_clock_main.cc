#include "world_clock.h"

// please refer to the world_clock.cc file
// for the trick of using atoi(string.c_str())
// in case of stoi is not available
// it should be used with #include <cstdlib>

using namespace std;

enum Choice {DEFAULT_, SET_, TICK_, QUIT_};

static map<string, Choice> mapChoice;

int main() {
    
    cout << "==============" << endl;
    cout << "HOW TO USE" << endl;
    cout << "TYPE SET/TICK/QUIT" << endl;
    cout << "SET XX:YY:ZZ" << endl;
    cout << "TICK +X/-X" << endl;
    cout << "PROGRAM START!" << endl;
    cout << "==============" << endl;
    
    mapChoice["set"] = SET_;
    mapChoice["tick"] = TICK_;
    mapChoice["quit"] = QUIT_;

    int tmp;
    string token, str;
    WorldClock c(0,0,0);
    
    while(1) {
        cin >> str;
        switch(mapChoice[str]) {
            case SET_:
                cin >> c;
                continue;
            case TICK_:
                cin >> tmp;
                c.SetTime(tmp);
                cout << c;
                continue;
            case QUIT_:
                exit(0);
            default:
                cout << "please type again" << endl;
        }
    }
    return 0;
}
