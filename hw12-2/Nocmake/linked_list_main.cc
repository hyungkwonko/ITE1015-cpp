#include "linked_list.h"

using namespace std;

int main() {

    int array[5] = {12,7,9,21,13};
    
    List<int> lt(array, 5);
    cout << lt;

    lt.pop_back();
    cout << lt;
    
    lt.push_back(15);
    cout << lt;

    lt.pop_front();
    cout << lt;

    lt.push_front(8);
    cout << lt;

    lt.insert_at(4,19);
    cout << lt;
    
    lt.remove_at(1);
    cout << lt;
    
    return 0;
}
