
#include "number.h"
#include <sstream>
#include <map>

using namespace std;

enum Choice {DEFAULT_, NUMBER_, SQUARE_, CUBE_};

static map<string, Choice> mapChoice;

int main() {

    mapChoice["number"] = NUMBER_;
    mapChoice["square"] = SQUARE_;
    mapChoice["cube"] = CUBE_;

    string str, token;
    string s[2];

    Number *nb = new Number;
    Square *sq = new Square;
    Cube *cb = new Cube;

    while(1) {
        getline(cin, str);

        if(str == "quit")
            break;

        istringstream iss(str);
        for(int i=0; i<2; i++) {
            getline(iss, token, ' ');
            s[i] = token;
        }

        switch(mapChoice[s[0]]) {
            case NUMBER_:
                nb->setNumber(stoi(s[1]));
                cout << "number: " << nb->getNumber() << endl;
                continue;
            case SQUARE_:
                sq->setNumber(stoi(s[1]));
                cout << "number: " << sq->getNumber() << endl;
                cout << "square: " << sq->getSquare() << endl;
                continue;
            case CUBE_:
                cb->setNumber(stoi(s[1]));
                cout << "number: " << cb->getNumber() << endl;
                cout << "square: " << cb->getSquare() << endl;
                cout << "cube: " << cb->getCube() << endl;
                continue;
            default:
                cout << "please type again..." << endl;
        }
    }

    delete nb, sq, cb;
    
    return 0;
}
