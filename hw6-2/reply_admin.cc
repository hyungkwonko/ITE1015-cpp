#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "reply_admin.h"

#define NUM_OF_CHAT 200

ReplyAdmin::ReplyAdmin() {
    chats = new string[NUM_OF_CHAT];
    ix = 0;
    cout << "constructor made!" << endl;
}

ReplyAdmin::~ReplyAdmin() {
    delete[] chats;
    cout << "constructor deleted!" << endl;
}

int ReplyAdmin::getChatCount() {
    return 0;
}

bool ReplyAdmin::addChat(string _chat) {
    chats[ix++] = _chat;
    for(int i=0; i<ix; i++)
        cout << i << " " << chats[i] << endl;
    return true;
}

bool ReplyAdmin::removeChat(int _index) {
    if(_index < 0 || _index > ix-1) {
        cout << "check the index" << endl;
        return false;
    }
    for(int i=_index; i<ix; i++)
        chats[i] = chats[i+1];
    
    chats[ix--] = "";
    
    for(int i=0; i<ix; i++)
        cout << i << " " << chats[i] << endl;
    
    return true;
}

bool ReplyAdmin::removeChat(int _start, int _end) {
    if(_start >= _end || _end > ix -1 || _start < 0) {
        cout << "check the index you typed." << endl;
        return false;
    }
    int n = _end - _start + 1;
    ix -= n;
    
    for(int i=_start; i<_end+1; i++)
        chats[i] = chats[i+n];
    
    for(int i=0; i<ix; i++)
        cout << i << " " << chats[i] << endl;
    
    return true;
}

