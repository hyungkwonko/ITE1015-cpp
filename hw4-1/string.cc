
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string str1, str2;
    cout << "first str: " << endl;
    cin >> str1;
    cout << "second str: " << endl;
    cin >> str2;
    
    string constr = str1 + str2;
    cout << "concatenated str: " << constr << endl;
    cout << "first element: " << constr[0] << endl;
    cout << "last element: " << constr[constr.size()-1] << endl;

    return 0;
}
