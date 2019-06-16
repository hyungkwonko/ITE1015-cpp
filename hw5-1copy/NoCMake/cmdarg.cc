#include <iostream>
#include <string.h>
#include <stdlib.h> 

using namespace std;

int main(int argc, const char **argv) {
    
    int sum = 0;
    char str[1000] = "";

    for(int i=1; i<argc; i++) {
        if(atoi(argv[i]) == 0) {
            strcat(str, argv[i]);
        }
        if(atoi(argv[i]) != 0) {
            sum += atoi(argv[i]);
        }
    }
    cout << "sum: " << sum << endl;
    cout << "str: " << str << endl;
    
    return 0;
}
