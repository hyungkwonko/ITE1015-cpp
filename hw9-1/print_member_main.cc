#include "print_member.h"
#include <sstream>

using namespace std;

int main() {
   
    string s[3];
    string token, str;
    
    getline(cin, str);
    istringstream iss(str);
    for(int i=0; i<3; i++) {
        getline(iss, token, ' ');
        s[i] = token;
    }

    vector<A*> lt;
    lt.push_back(new A(stoi(s[0])));
    lt.push_back(new B(stod(s[1])));
    lt.push_back(new C(s[2]));
    
    for(int i=0; i<lt.size(); ++i)
        lt[i]->print();

    for(int i=0; i<lt.size(); ++i)
        delete lt[i];

    return 0;
}
