#ifndef TRANSACTION_HDR
#define TRANSACTION_HDR
#include "Account.h"

class Transaction:public Account
{
    private:
        static double Transaction_amount;
        double amount;
    public:
        Transaction();
        Transaction(string,string,int,double);
        double Transaction_amount();
        double get_amount() const;
        double get_transaction_amount() const;
        void display() const;
        static void set_transaction_amount(double);

};
#endif