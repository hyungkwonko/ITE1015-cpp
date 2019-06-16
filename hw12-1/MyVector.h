#ifndef MY_VECTOR_H
#define MY_VECTOR_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class MyContainer {
    public:
        MyContainer();
        MyContainer(int n);
        MyContainer(T* arr, int n);
        ~MyContainer();
        void clear();
        int size() const;
    protected:
        T* obj_arr = NULL;
        int n_elements;
};

template <typename T>
class MyVector : public MyContainer<T> {
    public:
        MyVector();
        MyVector(int n);
        MyVector(T* arr, int n);
        bool empty();
        int max_size() const;
        void push_back(T obj);
        void pop_back();
        T& front();
        T& back();
        T& at(int idx);
        T& operator[] (const int& i);
        MyVector<T> operator+(const MyVector<T>& rhs);
    private:
        int capacity;
};

#endif
