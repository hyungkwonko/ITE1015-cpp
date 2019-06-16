#ifndef SIMPLE_ACCOUNT_H
#define SIMPLE_ACCOUNT_H

class bankAccount {
    private:
        int bankID;
        int balance;
    public:
        bankAccount();
        bankAccount(int bankID, int balance);
        int getID();
        int getBalance();
        void inMoney(int money);
        void outMoney(int money);
};

class accountManager {
    private:
        bankAccount* arr[10];
        int ix;
    public:
        accountManager();
        void makeAccount();
        void deposit();
        void withdraw();
        void transfer();
};

#endif
