#include "print_shape.h"

using namespace std;

enum Choice {DEFAULT_, C_, R_};

static map<string, Choice> mapChoice;

int main() {

    mapChoice["c"] = C_;
    mapChoice["r"] = R_;

    string token, str;
    string s[3];

    vector<Shape*> lt;

    while(1) {
        getline(cin, str);
        istringstream iss(str);
        for(int i=0; i<3; i++) {
            getline(iss, token, ' ');
            s[i] = token;
        }

        if(s[0] == "0")
            break;
        
        switch(mapChoice[s[0]]) {
            case C_:
                lt.push_back(new Circle(stod(s[1])));
                continue;
            case R_:
                lt.push_back(new Rectangle(stod(s[1]), stod(s[2])));
                continue;
            default:
                cout << "type again,,," << endl;
        }
    }

    for(int i=0; i<lt.size(); ++i) {
        cout << lt[i]->getTypeString() << ", ";
        cout << lt[i]->getArea() << ", ";
        cout << lt[i]->getPerimeter() << endl;
    }

    for(int i=0; i<lt.size(); ++i)
        delete lt[i];
    
    return 0;
}
