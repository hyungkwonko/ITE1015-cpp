#include <iostream>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <iostream>
#include <stdlib.h> 
#include <sys/wait.h>

#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char **argv) {
    
    srand((unsigned)time(0));
    int random_int = rand()%4;
    cout << random_int << endl;
    
    return 0;
}
