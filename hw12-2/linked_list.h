#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

using namespace std;

template <class T>
class Node {
    public:
        T data;
        Node<T>* next;
};

template <class T>
class List;

template <class T>
ostream& operator<<(ostream& out, List<T>& rhs);

template <class T>
class List {
    private:
        Node<T>* head;
        Node<T>* tail;
    public:
        unsigned int size;
        List() : head(NULL), tail(NULL), size(0) {};
        List(T* arr, int n_nodes);
        ~List();
        void insert_at(int idx, T const& data);
        void remove_at(int idx);
        void pop_back();
        void push_back(T const& val);
        void pop_front();
        void push_front(T const& val);
        friend ostream& operator<< <>(ostream& out, List& rhs);
};

template <class T>
ostream& operator<<(ostream& out, List<T>& rhs) {
    Node<T>* tmp = new Node<T>;
    tmp = rhs.head;
    while(tmp!=NULL) {
        out << tmp->data << " ";
        tmp = tmp->next;
    }
    out << endl;
    return out;
};

#endif
