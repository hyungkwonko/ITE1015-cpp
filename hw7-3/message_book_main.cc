#include "message_book.h"
#include <iostream>
#include <sstream>
//#include <map>
//#include <string>

using namespace std;

enum Choice { default_, add_, print_, list_, delete_, quit_ };

static map<string, Choice> mapChoice;

int main() {
    
    mapChoice["add"] = add_;
    mapChoice["print"] = print_;
    mapChoice["list"] = list_;
    mapChoice["delete"] = delete_;
    mapChoice["quit"] = quit_;

    string str, token;
    string s[3];

    MessageBook mb;

    while(1) {
        getline(cin, str);
        istringstream iss(str);
        
        for(int ix=0; ix<3; ix++) {
            if(ix == 2)
                getline(iss, token);
            else
                getline(iss, token, ' ');
            s[ix] = token;
        }

        switch(mapChoice[s[0]]) {
            case add_:
                mb.AddMessage(stoi(s[1]), s[2]);
                continue;
            case print_:
                cout << mb.GetMessage(stoi(s[1])) << endl;
                continue;
            case list_:
                mb.ListMessage();
                continue;
            case delete_:
                mb.DeleteMessage(stoi(s[1]));
                continue;
            case quit_:
                cout << "quit program..." << endl;
                exit(0);
            default:
                cout << "type again..." << endl;
        }
    }

    return 0;
}
