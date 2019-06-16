#include "MyVector.h"
#include <limits>

using namespace std;

enum Choice {DEFAULT_, NEW_, QUIT_, A_, B_};

static map<string, Choice> mapChoice;

int main() {

    mapChoice["new"] = NEW_;
    mapChoice["quit"] = QUIT_;
    mapChoice["a"] = A_;
    mapChoice["b"] = B_;

    string token, str;
    string x[3];

    int k;
    int nw = 0;

    MyVector ma,mb;

    while(1) {
        
        getline(cin, str);
        istringstream iss(str);
        for(int i=0; i<3; i++) {
            getline(iss, token, ' ');
            x[i] = token;
        }

        switch(mapChoice[x[0]]) {
            case A_:
                {
                    if(x[1] == "+" && x[2] == "b") {
                        cout << (ma+mb);
                    } else if(x[1] == "+") {
                        cout << (ma + stoi(x[2]));
                    } else if(x[1] == "-" && x[2] == "b") {
                        cout << (ma - mb);
                    } else if(x[1] == "-") {
                        cout << (ma - stoi(x[2]));
                    } else {
                        cout << "check the operator / #" << endl;
                    }
                    continue;
                }
            case B_:
                {
                    if(x[1] == "+" && x[2] == "a") {
                        cout << (ma + mb);
                    } else if(x[1] == "+") {
                        cout << (ma + stoi(x[2]));
                    } else if(x[1] == "-" && x[2] == "a") {
                        cout << (ma - mb);
                    } else if(x[1] == "-") {
                        cout << (ma - stoi(x[2]));
                    } else {
                        cout << "check the operator / #" << endl;
                    }
                    continue;
                }
            case NEW_:
                {
                    if(++nw > 1) {
                        ma.~MyVector();
                        mb.~MyVector();
                    }
                
                    printf("enter a: \n");
                    ma.setNum(stoi(x[1]));
                    cin >> ma;
                    
                    printf("enter b: \n");
                    mb.setNum(stoi(x[1]));
                    cin >> mb;
                    
                    cin.ignore(numeric_limits<std::streamsize>::max(),'\n');
                    continue;
                }
            case QUIT_:
                exit(0);
            default:
                cout << "type again,,," << endl;
        }
    }
    
    return 0;
}
