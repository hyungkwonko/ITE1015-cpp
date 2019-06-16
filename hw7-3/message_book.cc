
#include "message_book.h"
//#include <iostream>
//#include <string>
//#include <map>

using namespace std;

MessageBook::MessageBook() {
    cout << "message book made!" << endl;
}

MessageBook::~MessageBook() {
    cout << "Message Book deleted!" << endl;
}

void MessageBook::AddMessage(int number, const string& message) {
    messages_[number] = message;
}

void MessageBook::DeleteMessage(int number) {
    messages_.erase(number);
}

const string MessageBook::GetMessage(int number) const {
    auto it = messages_.find(number);
    if(it != messages_.end())
        return it->second;
    else
        return "not found!";
}

void MessageBook::ListMessage() const {
    for(auto it=messages_.cbegin(); it!=messages_.cend(); it++)
        cout << it->first << ": " << it->second << endl;
}
