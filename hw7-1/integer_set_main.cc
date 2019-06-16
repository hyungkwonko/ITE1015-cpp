#include "integer_set.h"
#include <map>
#include <sstream>

using namespace std;

enum Choice {DEFAULT_, ADD_, DEL_, GET_, QUIT_};

static map<string, Choice> mapChoice;

int main() {

    mapChoice["add"] = ADD_;
    mapChoice["del"] = DEL_;
    mapChoice["get"] = GET_;
    mapChoice["quit"] = QUIT_;

    IntegerSet iset;
    string str, token;
    string s[2];

    while(1) {
        getline(cin, str);
        istringstream iss(str);
        for(int i=0; i<2; i++) {
            getline(iss, token, ' ');
            s[i] = token;
        }
        
        switch(mapChoice[s[0]]) {
            case ADD_:
                iset.AddNumber(stoi(s[1]));
                iset.PrintAll();
                continue;
            case DEL_:
                cout << "del" << endl;
                iset.DeleteNumber(stoi(s[1]));
                iset.PrintAll();
                continue;
            case GET_:
                cout << "get" << endl;
                cout << iset.GetItem(stoi(s[1])) << endl;
                continue;
            case QUIT_:
                exit(0);
            default:
                cout << "type again..." << endl;
        }
    }

    return 0;
}
