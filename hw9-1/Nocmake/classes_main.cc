
#include "classes.h"

using namespace std;

int main() {

    vector<A*> lt;

    lt.push_back(new A());
    lt.push_back(new B());
    lt.push_back(new C());

    for(vector<A*>::iterator it=lt.begin(); it!=lt.end(); ++it) {
        (*it)->test();
        delete *it;
    }
    
    return 0;
}
