#ifndef REPLY_ADMIN_H
#define REPLY_ADMIN_H

#include <iostream>
#include <string.h>

using namespace std;

class ReplyAdmin {
    private:
        string* chats;
        int ix;
    public:
        ReplyAdmin();
        ~ReplyAdmin();
        int getChatCount();
        bool addChat(string _chat);
        bool removeChat(int _index);
        bool removeChat(int _start, int _end);
};

#endif
