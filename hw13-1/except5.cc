#include <iostream>
#include <string>

using namespace std;

class A {
    public:
        A() {
            cout << "made" << endl;
        }
        ~A() {
            cout << "done" << endl;
        }
};

int main() {
    try {
        try {
            A a;
            throw a;
        } catch(A& a) {
            if(1) {
                cout << "rethrow" << endl;
                throw;
            }  else {
                cout << "throw twice" << endl;
                throw a;
            }
        }
    } catch(A& a) {
        cout << "exception handled" << endl;
    }
    return 1;
}
