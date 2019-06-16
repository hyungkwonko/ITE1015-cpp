
#include "print_shape.h"

enum Choice {DEFAULT_, A_, B_, C_, BB_};

static map<string, Choice> mapChoice;

using namespace std;

int main() {

    //mapChoice["A"] = A_;
    mapChoice["B"] = B_;
    mapChoice["C"] = C_;
    mapChoice["BB"] = BB_;

    string s;
    vector<A*> lt;

    while(1) {
        getline(cin, s);

        if(s == "0")
            break;
        
        switch(mapChoice[s]) {
            //case A_:
            //    lt.push_back(new A());
            //    continue;
            case B_:
                lt.push_back(new B());
                continue;
            case C_:
                lt.push_back(new C());
                continue;
            case BB_:
                lt.push_back(new BB());
                continue;
            default:
                cout << "plz type again" << endl;
        }
    }

    for(int i=0; i<lt.size(); ++i) {
        lt[i]->test1();
        lt[i]->test2();
    }

    for(int i=0; i<lt.size(); ++i)
        delete lt[i];

    return 0;
}
