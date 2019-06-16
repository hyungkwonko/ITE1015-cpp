#include "rectangle.h"

using namespace std;

enum Choice {DEFAULT_, SQ_, NSQ_};

static map<string, Choice> mapChoice;

int main() {

    mapChoice["square"] = SQ_;
    mapChoice["nonsquare"] = NSQ_;

    string token, str;
    string s[3];

    while(1) {
        getline(cin, str);
        istringstream iss(str);
        for(int i=0; i<3; i++) {
            getline(iss, token, ' ');
            s[i] = token;
        }

        if(s[0] == "quit")
            break;
        
        Square sq(stoi(s[1]));
        NonSquare nsq(stoi(s[1]), stoi(s[2]));

        switch(mapChoice[s[0]]) {
            case SQ_:
                sq.print();
                continue;
            case NSQ_:
                nsq.print();
                continue;
            default:
                cout << "type again,,," << endl;
        }
    }
    
    return 0;
}
