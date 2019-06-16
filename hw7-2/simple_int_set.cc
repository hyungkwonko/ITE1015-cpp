
#include "simple_int_set.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

SimpleSet::SimpleSet() {
    cout << "c made!" << endl;
}

set<int> SimpleSet::SetIntersection(const set<int>& set0, const set<int>& set1) {
    set<int> iset;
    set_intersection(set0.begin(), set0.end(), set1.begin(), set1.end(), inserter(iset, iset.end()));
    return iset;
}

set<int> SimpleSet::SetUnion(const set<int>& set0, const set<int>& set1) {
    set<int> uset = set0;
    uset.insert(set1.begin(), set1.end());
    return uset;
}

set<int> SimpleSet::SetDifference(const set<int>& set0, const set<int>& set1) {
    set<int> dset;
    set_difference(set0.begin(), set0.end(), set1.begin(), set1.end(), inserter(dset, dset.end()));
    return dset;
}
