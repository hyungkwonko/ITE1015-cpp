
#include "animals.h"

enum Choice {DEFAULT_, Z_, C_};

static map<string, Choice> mapChoice;

using namespace std;

int main() {

    mapChoice["z"] = Z_;
    mapChoice["c"] = C_;

    string s[4];
    string token, str;
    vector<Animals*> lt;

    while(1) {
        getline(cin, str);
        istringstream iss(str);
        for(int i=0; i<4; i++) {
            getline(iss, token, ' ');
            s[i] = token;
        }

        if(s[0] == "0")
            break;
        
        switch(mapChoice[s[0]]) {
            case Z_:
                lt.push_back(new Zebra(s[1], stoi(s[2]), stoi(s[3])));
                continue;
            case C_:
                lt.push_back(new Cat(s[1], stoi(s[2]), s[3]));
                continue;
            default:
                cout << "plz type again" << endl;
        }
    }

    for(int i=0; i<lt.size(); ++i)
        lt[i]->printInfo();

    for(int i=0; i<lt.size(); ++i)
        delete lt[i];

    return 0;
}
