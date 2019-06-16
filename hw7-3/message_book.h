#ifndef MESSAGE_BOOK_H
#define MESSAGE_BOOK_H

#include <string>
#include <map>
#include <iostream>

using namespace std;

class MessageBook {
    public:
        MessageBook();
        ~MessageBook();
        void AddMessage(int number, const string& message);
        void DeleteMessage(int number);
        //vector<int> GetNumbers() const; // this is not used
        const string GetMessage(int number) const;
        void ListMessage() const;
    private:
        map<int, string> messages_;
};

#endif
