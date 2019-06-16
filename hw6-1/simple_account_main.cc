#include "simple_account.h"
#include <iostream>

using namespace std;

int main() {
    char p[1];
    int a[4];

    accountManager manager;

    while(true) {
        cout << "JOB?" << endl;
        cin >> p[0];
        if(p[0] == 'D') {
            manager.deposit();
        } else if(p[0] == 'N') {
            manager.makeAccount();
        } else if(p[0] == 'W') {
            manager.withdraw();
        } else if(p[0] == 'T') {
            manager.transfer();
        } else if(p[0] == 'Q') {
            cout << "quit.." << endl;
            break;
        } else {
            cout << "try again..." << endl;
            continue;
        }
    }
    return 0;
}
