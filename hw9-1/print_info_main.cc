
#include "print_info.h"

using namespace std;

int main() {

    vector<A*> lt;

    lt.push_back(new A());
    lt.push_back(new B());
    lt.push_back(new C());
    
    for(int i=0; i<lt.size(); ++i) {
        printObjectTypeInfo1(lt[i]);
        printObjectTypeInfo2(*lt[i]);
    }

    for(int i=0; i<lt.size(); ++i) 
        delete lt[i];

    return 0;
}
