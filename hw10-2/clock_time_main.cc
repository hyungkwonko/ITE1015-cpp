#include "clock_time.h"

using namespace std;

int main() {
    
    int time;

    cin >> time;

    vector<Clock*> lt;
    lt.push_back(new SundialClock(0,0,0));
    lt.push_back(new CuckooClock(0,0,0));
    lt.push_back(new GrandFatherClock(0,0,0));
    lt.push_back(new WristClock(0,0,0));
    lt.push_back(new AtomicClock(0,0,0));

    cout << "REPORTED CLOCK TIMES AFTER RESETTING" << endl;
    for(int i=0; i<lt.size(); i++) {
        lt[i]->reset();
        lt[i]->displayTime();
    }

    cout << "\n\nRUNNING THE CLOCKS...\n\n";

    cout << "REPORTED CLOCK TIMES AFTER RUNING" << endl;
    for(int i=0; i<lt.size(); i++) {
        lt[i]->setTick(time);
        lt[i]->tick();
        lt[i]->displayTime();
    }

    for(int i=0; i<lt.size(); i++)
        delete lt[i];

    return 0;
}
