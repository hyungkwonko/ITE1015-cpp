
#include <iostream>
#include "simple_account.h"

using namespace std;

bankAccount::bankAccount(int bankID, int balance) {
    this->bankID = bankID;
    this->balance = balance;
}

int bankAccount::getID() {
    return bankID;
}

int bankAccount::getBalance() {
    return balance;
}

void bankAccount::inMoney(int money) {
    balance += money;
}

void bankAccount::outMoney(int money) {
    balance -= money;
}

/////////////////////////////////////

accountManager::accountManager() {
    ix = 0;
}

void accountManager::makeAccount() {
    cout << "making new account..." << endl;
    arr[ix] = new bankAccount(ix,0);
    cout << "Account for user " << ix << " registered." << endl;
    cout << "Balance of user " << ix << ": 0" << endl;
    ix++;
}

void accountManager::deposit() {
    int id, m;
    cout << "please type bankID and money." <<endl;
    cin >> id >> m;

    for(int i=0; i<ix; i++) {
        if(arr[i]->getID() == id) {
            if(arr[i]->getBalance() + m <= 1000000) {
                arr[i]->inMoney(m);
                cout << "money deposit completed!" << endl;
                return;
            } else {
                cout << "cannot depsit more than 1,000,000 WON!" << endl;
                return;
            }
        }
    }
    cout << "bankID NOT FOUND." << endl;
}

void accountManager::withdraw() {
    int id, m;
    cout << "please type bankID and money." << endl;
    cin >> id >> m;

    for(int i=0; i<ix; i++) {
        if(arr[i]->getID() == id) {
            if(arr[i]->getBalance() < m) {
                cout << "NOT enough money in the account." << endl;
                return;
            } else {
                arr[i]->outMoney(m);
                cout << "withdraw completed." << endl;
                return;
            }
        }
    }
    cout << "bankID NOT FOUND." << endl;
}

void accountManager::transfer() {
    int id1, id2, m;
    cout << "please type id1(from), id2(to) and money." << endl;
    cin >> id1 >> id2 >> m;
    for(int i=0; i<ix; i++) {
        if(arr[i]->getID() == id1) {
            for(int j=0; j<ix; j++) {
                if(arr[j]->getID() == id2) {
                    if(arr[i]->getBalance() - m > 0 && arr[j]->getBalance() + m < 1000000) {
                        cout << "transfer from id " << i << " to " << j <<endl;
                        arr[i]->outMoney(m);
                        arr[j]->inMoney(m);
                        cout << "Balance of user " << i << ": " << arr[i]->getBalance() << endl;
                        cout << "Balance of user " << j << ": " << arr[j]->getBalance() << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "bankID NOT FOUND" << endl;
    return;
}
