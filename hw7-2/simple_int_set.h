#ifndef SIMPLE_INT_SET_H
#define SIMPLE_INT_SET_H

#include <string>
#include <algorithm>
#include <set>
#include <iostream>

using namespace std;

class SimpleSet {
    public:
        SimpleSet();

        set<int> SetIntersection(const set<int>& set0, const set<int>& set1);
        set<int> SetUnion(const set<int>& set0, const set<int>& set1); 
        set<int> SetDifference(const set<int>& set0, const set<int>& set1);
};


#endif
