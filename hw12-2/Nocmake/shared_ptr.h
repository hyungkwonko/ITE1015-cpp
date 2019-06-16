#ifndef SHARED_PTR_H
#define SHARED_PTR_H

#include <iostream>
#include <memory>

using namespace std;

template <class T>
class My_shared_ptr {
    private:
        T* m_obj = NULL;
        int* count = NULL;
    public:
        My_shared_ptr();
        My_shared_ptr(T* obj);
        My_shared_ptr(const My_shared_ptr& rhs);
        ~My_shared_ptr();
        My_shared_ptr<T>& operator=(const My_shared_ptr<T>& rhs);
        //My_shared_ptr<T>& operator=(My_shared_ptr<T>& rhs);
        const T* get_m_obj();
        int getCount();
        void increase();
        void decrease();
};

#endif
