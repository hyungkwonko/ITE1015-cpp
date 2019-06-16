
#include "dynamic_cast.h"

enum Choice {DEFAULT_, B_, C_, D_};

static map<string, Choice> mapChoice;

using namespace std;

int main() {

    mapChoice["B"] = B_;
    mapChoice["C"] = C_;
    mapChoice["D"] = D_;

    string s;
    vector<B*> lt;

    while(1) {
        getline(cin, s);

        if(s == "0")
            break;
        
        switch(mapChoice[s]) {
            case B_:
                lt.push_back(new B());
                continue;
            case C_:
                lt.push_back(new C());
                continue;
            case D_:
                lt.push_back(new D());
                continue;
            default:
                cout << "plz type again" << endl;
        }
    }
    C* pc;
    D* pd;

    for(int i=0; i<lt.size(); ++i) {
         pc = dynamic_cast<C*>(lt[i]);
         pd = dynamic_cast<D*>(lt[i]);

         if(pc)
             pc->test_C();
         else if(pd)
             pd->test_D();
         else
             continue;
    }

    for(int i=0; i<lt.size(); ++i)
        delete lt[i];

    return 0;
}
