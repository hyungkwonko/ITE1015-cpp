#include <iostream>

using namespace std;

typedef struct Person {
    char name[10];
    int age;
} Person;

int main() {
    int n;
    cout << "enter any integer: ";
    cin >> n;
    Person *person = new Person[n];

    for(int i=0; i<n; i++) {
        cout << "type name & age: ";
        cin >> person[i].name >> person[i].age;
    }

    for(int i=0; i<n; i++) {
        cout << "name: " << person[i].name << ", age: " << person[i].age << endl;
    }

    delete[] person;

    return 0;
}
