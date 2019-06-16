#include "linked_list.h"

using namespace std;

template <class T>
List<T>::List(T* arr, int n_nodes) {
    head = tail = NULL;
    size = 0;
    for(int i=0; i<n_nodes; i++)
        this->push_back(arr[i]);
}

template <class T>
List<T>::~List() { }

template <class T>
void List<T>::insert_at(int idx, T const& data) {
    Node<T>* tmp = new Node<T>;
    Node<T>* tmp2 = new Node<T>;
    tmp2->data = data;
    tmp2->next = NULL;
    tmp = head;
    for(int i=0; i<(idx-1); i++)
        tmp = tmp->next; 

    tmp2->next = tmp->next;
    tmp->next = tmp2;
    size++;
}

template <class T>
void List<T>::remove_at(int idx) {
    if(idx > size - 1) {
        cout << "invalid input" << endl;
        return;
    }
    if(head == NULL)
        return;
    if(idx == 0) {
        this->pop_front();
        return;
    }
    if(idx == size -1) {
        this->pop_back();
        return;
    }
    
    Node<T>* tmp = new Node<T>;
    tmp = head;
    for(int i=0; i<idx-1; i++) {
        tmp = tmp->next;
    }
    tmp->next = tmp->next->next;
    tmp = tmp->next;

    size--;
}

template <class T>
void List<T>::pop_back() {
    if(head == tail) {
        head = tail = NULL;
        size--;
        return;
    }
    
    Node<T>* tmp = new Node<T>;
    tmp = head;

    while(tmp->next->next != NULL)
        tmp = tmp->next;
    tail = tmp;
    delete tail->next;
    tail->next = NULL;
    size--;
}


template <class T>
void List<T>::push_back(T const& val) {
    Node<T>* tmp = new Node<T>;
    tmp->data = val;
    tmp->next = NULL;
    if(head == NULL) {
        head = tail = tmp;
        tmp = NULL;
    } else {
        tail->next = tmp;
        tail = tmp;
    }
    size++;
}


template <class T>
void List<T>::pop_front() {
    if(head == tail) {
        head = tail = NULL;
        size--;
        return;
    }
    
    Node<T>* tmp = new Node<T>;
    tmp = head;
    head = head->next;
    delete tmp;
    size--;
}


template <class T>
void List<T>::push_front(T const& val) {
    Node<T>* tmp = new Node<T>;
    tmp->data = val;
    tmp->next = NULL;
    if(head == NULL) {
        head = tail = tmp;
        tmp = NULL;
    } else {
        tmp->next = head;
        head = tmp;
    }
    size++;
}

/*
template <class T>
ostream& operator<<(ostream& out, List<T>& rhs) {
    Node<T>* tmp = new Node<T>;
    tmp = rhs.head;
    while(tmp->next != NULL) {
        out << tmp->data << " ";
        tmp = tmp->next;
    }
    out << endl;
    return out;
}*/

template class Node<int>;
template class List<int>;
