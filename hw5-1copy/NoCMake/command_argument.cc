#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(int argc, const char **argv) {
    string str = argv[1];
    for(int i=0; i<atoi(argv[2]); i++)
        cout << str << endl;
    return 0;
}
