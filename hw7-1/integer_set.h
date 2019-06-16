#ifndef INTEGER_SET_H
#define INTEGER_SET_H

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class IntegerSet {
    public:
        IntegerSet();
        ~IntegerSet();

        void AddNumber(int num);
        void DeleteNumber(int num);
        int GetItem(int pos) const;
        void PrintAll() const;
    private:
        std::vector<int> numbers_;
        std::vector<int>::iterator position;
};


#endif
