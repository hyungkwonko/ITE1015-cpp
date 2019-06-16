#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int i;
    char str[10];
    
    std::cout<<"type any: ";
    std::cin>>str;
 
    for(i=0; str[i]; i++) {
        if((str[i]>='a') && (str[i]<='z')) {
            str[i] = str[i] - 'a' + 'A';
        }else {
            if((str[i]>='A') && (str[i]<= 'Z')) {
                str[i] = str[i] - 'A' + 'a';
            }
        }
    }
    std::cout<<"inversed: "<<str<<std::endl;
    return 0;
}
