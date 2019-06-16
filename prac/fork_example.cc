#include <iostream>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <iostream>
#include <stdlib.h> 
#include <sys/wait.h>

using namespace std;

int main(int argc, const char **argv) {
    
    printf("I am: %d\n", (int) getpid());
   
    pid_t pid = fork();

    if(pid == -1) {
        printf("error occured. fork not possible\n");
    }

    if(pid == 0) {
        printf("child %d\n", (int) getpid());
        sleep(3);
        printf("child sleep end\n");
        exit(0);
    } else {
        printf("parent %d\n", (int) getpid());
        wait(NULL); 
        printf("parent sleep end\n");
        exit(0);
    }
    return 0;
}
