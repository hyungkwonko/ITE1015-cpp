#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

class A {
    public:
        string msg;
        A() : msg("throw new A has been called") {}
};

class B : public A {
    public:
        string msg;
        B() : msg("throw new B has been called") {}
};

class C : public B {
    public:
        string msg;
        C() : msg("throw new C has been called") {}

};

int main() {
    int n;
    cout << "input num(0~2):";
    cin >> n;

    try {
        if(n==0)
            throw new A;
        else if(n==1)
            throw new B;
        else if(n==2)
            throw new C;
        else
            throw string("invalid input");
    } catch(string s) {
        cout << s << endl;
    } catch(C* c) {
        cout << c->msg << endl;
    } catch(B* b) {
        cout << b->msg << endl;
    } catch(A* a) {
        cout << a->msg << endl;
    }

    return 1;
}
