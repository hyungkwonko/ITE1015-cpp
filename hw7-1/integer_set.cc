#include "integer_set.h"
#include <stdexcept>

using namespace std;

IntegerSet::IntegerSet() {
    cout << "integer set made" << endl;
}

IntegerSet::~IntegerSet() {
    cout << "integer set deleted" << endl;
}

void IntegerSet::AddNumber(int num) {
    if(find(numbers_.begin(), numbers_.end(), num) == numbers_.end()) {
        numbers_.push_back(num);
        sort(numbers_.begin(), numbers_.end());
    } else {
        cout << "element already exists!" << endl;
    }
}

void IntegerSet::DeleteNumber(int num) {
    position = find(numbers_.begin(), numbers_.end(), num);
    if(position != numbers_.end())
        numbers_.erase(position);
    else
        cout << "element not exists!" << endl;
}

int IntegerSet::GetItem(int pos) const {
    try {
        return numbers_.at(pos);
    } catch(out_of_range& oor) {
        return -1;
    }
}

void IntegerSet::PrintAll() const {
    for(auto i=numbers_.begin(); i!=numbers_.end(); i++)
        cout << *i << " ";
    cout << endl;
}


