
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "minimal_fighter.h"

using namespace std;

string* split(const string& str, const string& delim) {
    string* string_list = new string[5];
    int ix = 0;
    char* token = strtok(const_cast<char*>(str.c_str()), delim.c_str());
    while(token != NULL) {
        string_list[ix] = token;
        token = strtok(NULL, delim.c_str());
        ++ix;
    }
    return string_list;
}

int main() {

    string s;
    string* str_ls;
    
    while(1) {
        cout << "type: " << endl;
        getline(cin, s);
        if(s == "q") {
            cout << "quit program..." << endl;
            break;
        } else {
            str_ls = split(s, " ");
            MinimalFighter mf[2] = {MinimalFighter(stoi(str_ls[0]), stoi(str_ls[1])), MinimalFighter(stoi(str_ls[3]),stoi(str_ls[4]))};
            
            if(str_ls[2] == "H")
                mf[0].hit(&mf[1]);
            else if(str_ls[2] == "A")
                mf[0].attack(&mf[1]);
            else if(str_ls[2] == "F")
                mf[0].fight(&mf[1]); 
            else {
                cout << "please type again..." << endl;
                continue;
            }
            cout << mf[0].print() << " / " << mf[1].print() << endl;
        }
    }
    return 0;
}
