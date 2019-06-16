
#include "simple_int_set.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main() {

    SimpleSet ss1;
    char str[100];
    char str2[1];

    set<int> set0, set1, set2;
    /*
    set0.insert(10);
    set0.insert(30);
    set0.insert(20);
    set0.insert(50);
    
    set1.insert(50);
    set1.insert(10);
    set1.insert(90);
*/
    while(1) {
        cin >> str;
        if(str[0] == '}')
            break;
        if(str[0] != '{') {
            set0.insert(atoi(str));
            cout << "inserted" << endl;
        }
    }

    cin >> str2;

    while(1) {
        cin >> str;
        if(str[0] == '}')
            break;
        if(str[0] != '{') {
            set1.insert(atoi(str));
            cout << "ins222" << endl;
        }
    }
    //str = '+';
    
    if(str2[0] == '+') {
        set2 = ss1.SetUnion(set0, set1);
    } else if(str2[0] == '-') {
        set2 = ss1.SetDifference(set0, set1);
    } else if(str2[0] == '*') {
        set2 = ss1.SetIntersection(set0, set1);
    } else {
        cout << "check the operator!" << endl;
        exit(1);
    }

    for(auto it=set2.begin(); it!=set2.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}


