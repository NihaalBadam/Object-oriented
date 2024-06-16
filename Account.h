#ifndef ACCOUNT_HDR
#define ACCOUNT_HDR

#include<iostream>
using namespace std;

class Account
{
    private:
        string account_no;
        string name;
        double balance;
    
    public:
        Account(string,string,double=0.0);
        Account();
        virtual double calculateIntrest() = 0;
        virtual void Deposit(double);
        virtual void Withdrawal(double);
        void set_balance(double);
        void set_acc_no(string);
        void set_name(string);
        double get_balance() const;
        string get_account_no() const;
        string get_name() const;
        virtual void display() const;
};
#endif 