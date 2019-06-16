#include "draw_shape.h"

using namespace std;

enum Choice {DEFAULT_, SQ_, RECT_, DIA_};

static map<string, Choice> mapChoice;

int main() {

    mapChoice["square"] = SQ_;
    mapChoice["rect"] = RECT_;
    mapChoice["diamond"] = DIA_;

    string token, str;
    string s[6];

    int x[2];

    getline(cin, str);
    istringstream iss(str);
    for(int i=0; i<2; i++) {
        getline(iss, token, ' ');
        x[i] = stoi(token);
    }

    while(1) {
        getline(cin, str);
        istringstream iss(str);
        for(int i=0; i<6; i++) {
            getline(iss, token, ' ');
            s[i] = token;
        }

        if(s[0] == "quit")
            break;

        Square *sq = new Square(0,0);
        Rectangle *rtg = new Rectangle(0,0);
        Diamond *dia = new Diamond(0);

        switch(mapChoice[s[0]]) {
            case SQ_:
                sq->setValue(stoi(s[3]), stoi(s[3]));
                sq->print();
                sq->Draw(x[0], x[1], stoi(s[1]), stoi(s[2]), s[4]);
                continue;
            case RECT_:
                rtg->setValue(stoi(s[3]), stoi(s[4]));
                rtg->print();
                rtg->Draw(x[0], x[1], stoi(s[1]), stoi(s[2]), s[5]);
                continue;
            case DIA_:
                dia->setValue(stoi(s[3]),0);
                dia->print();
                dia->Draw(x[0], x[1], stoi(s[1]), stoi(s[2]), s[4]);
                continue;
            default:
                cout << "type again,,," << endl;
        }

        delete sq, rtg, dia;
    }
    
    return 0;
}
