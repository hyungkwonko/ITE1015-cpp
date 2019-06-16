#include "shared_ptr.h"

using namespace std;


template <class T>
My_shared_ptr<T>::My_shared_ptr() { 
    int tmp = 0;
    count = &tmp;
    cout << "made" << endl;
}

template <class T>
My_shared_ptr<T>::My_shared_ptr(T* obj) {
    cout << "made2" << endl;
    m_obj = obj;
    int tmp2 = 1;
    count = &tmp2;
}

template <class T>
My_shared_ptr<T>::My_shared_ptr(const My_shared_ptr& rhs) {
    *this = rhs;
    *this->count = 1;
}

template <class T>
My_shared_ptr<T>::~My_shared_ptr() {
    cout << "delete" << endl;
    if(getCount() == 0)
        cout << "everything destroyed" << endl;
}

template <class T>
My_shared_ptr<T>& My_shared_ptr<T>::operator=(const My_shared_ptr<T>& rhs) {
    this->m_obj = rhs.m_obj;
    *this->count = *rhs.count;
    return *this;
}

template <class T>
const T* My_shared_ptr<T>::get_m_obj() {
    return m_obj;
}


template <class T>
int My_shared_ptr<T>::getCount() {
    return *count;
}

template <class T>
void My_shared_ptr<T>::increase() {
    *count++;
}

template <class T>
void My_shared_ptr<T>::decrease() {
    *count--;
}

template class My_shared_ptr<int>;
