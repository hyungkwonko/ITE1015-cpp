
#include <iostream>

using namespace std;

int main() {
    signed int arr[3][2]; // integer input (-,0,+)
    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            std::cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<endl;
    }

    for(int j=0; j<2; j++) {
        int sum = 0;
        for(int i=0; i<3; i++) {
            sum += arr[i][j];
        }
        std::cout<<"sum of the "<<(j+1)<<" row: "<<sum<<std::endl;
    }

    return 0;
}
