#include "shared_ptr.h"

using namespace std;

int main() {
    {
        My_shared_ptr<int> a;
        cout << a.getCount() << endl;
        
        {
            My_shared_ptr<int> b(new int(5));
            
            cout << "b: " << b.getCount() << endl;
            cout << "a: " << a.getCount() << endl;
            
            if(a.get_m_obj() == b.get_m_obj())
                cout << "resource_shared" << endl;
            //a = b;
            
            cout << a.getCount() << endl;
            cout << b.getCount() << endl;
            if(a.get_m_obj() == b.get_m_obj())
                cout << "resource_shared" << endl;
            
        }
        cout << a.getCount() << endl;
        
    }
    return 0;
}
