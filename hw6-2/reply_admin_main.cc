#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "reply_admin.h"

using namespace std;

string* split(const string& str, const string& delim) {
    string* string_list = new string[2];
    int idx = 0;
    char* token = strtok(const_cast<char*>(str.c_str()), delim.c_str());
    while(token != NULL) {
        string_list[idx] = token;
        token = strtok(NULL, delim.c_str());
        ++idx;
    }
    return string_list;
}

int main() {
    
    string s;
    string* str_ls;
    ReplyAdmin ra;
    
    while(true) {
        cout << "type #quit / #remove (number) / reply string." << endl;
        getline(cin, s);
        if(s == "#quit")
            break;
        else if(s.find("#remove") != string::npos) {
            str_ls = split(s, " ");
            if(strstr(str_ls[1].c_str(), "-")) {
                str_ls = split(str_ls[1], "-");
                ra.removeChat(stoi(str_ls[0]), stoi(str_ls[1]));
            } else {
                ra.removeChat(stoi(str_ls[1]));
            }
        }
        else
            ra.addChat(s);
    }
    return 0;
}
