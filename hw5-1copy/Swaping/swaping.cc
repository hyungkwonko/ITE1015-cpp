#include <iostream>
#include <string.h>

using namespace std;

void swapInt(int& n1, int& n2);
void swapString(string& s1, string& s2);

int main(void) {

    int n1, n2;
    string s1,s2;
    cin >> n1 >> n2 >> s1 >> s2;

    cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 << endl;
    swapInt(n1, n2);
    swapString(s1, s2);
    cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 << endl;

    return 0;
}

void swapInt(int& n1, int& n2) {
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void swapString(string& s1, string& s2) {
    string tmp = s1;
    s1 = s2;
    s2 = tmp;
}
