#include "calendar.h"

using namespace std;

enum Choice {DEFAULT_, SET_, NEXT_, QUIT_};

static map<string, Choice> mapChoice;

int main() {
    
    cout << "==============" << endl;
    cout << "HOW TO USE" << endl;
    cout << "TYPE SET/NEXT_DAY/QUIT" << endl;
    cout << "SET XXXX.YY.ZZ" << endl;
    cout << "NEXT_DAY +X/-X" << endl;
    cout << "PROGRAM START!" << endl;
    cout << "==============" << endl;
    
    mapChoice["set"] = SET_;
    mapChoice["next_day"] = NEXT_;
    mapChoice["quit"] = QUIT_;
    
    int tmp;
    string token, str;    
    Date d(0,0,0);

    while(1) {
        cin >> str;
        switch(mapChoice[str]) {
            case SET_:
                cin >> d;
                continue;
            case NEXT_:
                cin >> tmp;
                d.NextDay(tmp);
                continue;
            case QUIT_:
                exit(0);
            default:
                cout << "please type again..." << endl;
        }
    }

    cout << "running" << endl;
    return 0;
}
