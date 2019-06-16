#include "MyVector.h"

using namespace std;

template <typename T>
MyContainer<T>::MyContainer() { }

template <typename T>
MyContainer<T>::MyContainer(int n) {
    n_elements = n;
    obj_arr = new T[n_elements];
}

template <typename T>
MyContainer<T>::MyContainer(T* arr, int n) {
    n_elements = n;
    obj_arr = new T[n_elements];
    //obj_arr = arr;
    for(int i=0; i<n; i++)
        obj_arr[i] = arr[i];
}

template <typename T>
MyContainer<T>::~MyContainer() { }

template <typename T>
void MyContainer<T>::clear() {
    for(int i=0; i<n_elements; i++)
        obj_arr[i] = 0;
    delete[] obj_arr;
    n_elements = 0;
}

template <typename T>
int MyContainer<T>::size() const {
    return n_elements;
}

////////////////////////////////////////

template <typename T>
MyVector<T>::MyVector() {
    capacity = 1;
    this->n_elements = 0;
    this->obj_arr = new T[capacity];
}

template <typename T>
MyVector<T>::MyVector(int n) {
    capacity = n;
    this->n_elements = 0;
    this->obj_arr = new T[capacity];
}

template <typename T>
MyVector<T>::MyVector(T* arr, int n) {
    capacity = this->n_elements = n;
    this->obj_arr = new T[this->n_elements];
    for(int i=0; i<n; i++)
        this->obj_arr[i] = arr[i];
}

template <typename T>
bool MyVector<T>::empty() {
    return (this->n_elements == 0) ? true : false;
}

template <typename T>
int MyVector<T>::max_size() const {
    return capacity;
}

template <typename T>
void MyVector<T>::push_back(T obj) {
    if(this->n_elements < capacity)
        this->obj_arr[this->n_elements] = obj;
    else {
        capacity *= 2;
        T* tmp = new T[capacity];
        for(int i=0; i<this->n_elements; i++) {
            tmp[i] = this->obj_arr[i];
            this->obj_arr[i] = 0;
        }
        tmp[this->n_elements] = obj;
        delete[] this->obj_arr;
        this->obj_arr = tmp;
    }
    this->n_elements++;
}

template <typename T>
void MyVector<T>::pop_back() {
    if(this->n_elements > 0) {
        this->obj_arr[this->n_elements-1] = 0;
        this->n_elements--;
    }
}

template <typename T>
T& MyVector<T>::front() {
    return this->obj_arr[0];
}

template <typename T>
T& MyVector<T>::back() {
    return this->obj_arr[this->n_elements-1];
}

template <typename T>
T& MyVector<T>::at(int idx) {
    return this->obj_arr[idx];
}

template <typename T>
T& MyVector<T>::operator[](const int& i) {
    return this->obj_arr[i];
}

template <typename T>
MyVector<T> MyVector<T>::operator+(const MyVector<T>& rhs) {
    MyVector<T> tmp;
    tmp.obj_arr = this->obj_arr;
    tmp.n_elements = this->n_elements;
    for(int i=0; i<rhs.n_elements; i++)
        tmp.push_back(rhs.obj_arr[i]);
    return tmp;
}

template class MyContainer<int>;
template class MyVector<int>;
