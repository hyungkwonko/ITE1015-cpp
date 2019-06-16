#include <string>
#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

string add(string a, string b) {
    return a + '-' + b;
}

int main() {
    int a, b;
    string c, d;

    cout << "type two integer: " << endl;
    cin >> a >> b;
    cout << "type two string: " << endl;
    cin >> c >> d;

    cout << "added integers: " << add(a,b) << endl;
    cout << "added strings: " << add(c,d) << endl;
    return 0;
}
