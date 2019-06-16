#include "sorted_array.h"
#include <map>
#include <sstream>
#include <stdexcept>

using namespace std;

enum Choice {DEFAULT_, ASCEND_, DESCEND_, MAX_, MIN_, QUIT_};

static map<string, Choice> mapChoice;

int main() {

    mapChoice["ascend"] = ASCEND_;
    mapChoice["descend"] = DESCEND_;
    mapChoice["max"] = MAX_;
    mapChoice["min"] = MIN_;
    mapChoice["quit"] = QUIT_;

    SortedArray sa;
    string str, token;
    vector<int> tmp;

    while(1) {
        getline(cin, str);
        istringstream iss(str);
        getline(iss, token, ' ');
        try {
            sa.AddNumber(stoi(token));
            while(getline(iss, token, ' '))
                sa.AddNumber(stoi(token));
            continue;
        } catch(invalid_argument& e) {}

        switch(mapChoice[token]) {
            case ASCEND_:
                tmp = sa.GetSortedAscending();
                for(vector<int>::size_type i=0; i!=tmp.size(); i++)
                    cout << tmp[i] << " ";
                cout << endl;
                continue;
            case DESCEND_:
                tmp = sa.GetSortedDescending();
                for(vector<int>::size_type i=0; i!=tmp.size(); i++)
                    cout << tmp[i] << " ";
                cout << endl;
                continue;
            case MAX_:
                cout << "MAX: " << sa.GetMax() << endl;
                continue;
            case MIN_:
                cout << "MIN: " << sa.GetMin() << endl;
                continue;
            case QUIT_:
                cout << "QUIT program..." << endl;
                exit(0);
            default:
                cout << "type again..." << endl;
        }
    }

    return 0;
}
