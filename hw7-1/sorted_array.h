#ifndef SORTED_ARRAY_H
#define SORTED_ARRAY_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class SortedArray {
    public:
        SortedArray();
        ~SortedArray();

        void AddNumber(int num);

        vector<int> GetSortedAscending();
        vector<int> GetSortedDescending();
        int GetMax() const;
        int GetMin() const;
    private:
        vector<int> numbers_;
};

#endif
