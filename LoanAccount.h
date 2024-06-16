#ifndef LOAN_HDR
#define LOAN_HDR
#include "Account.h"

class LoanAccount:public Account
{
    private:
        static double intrest_rate;
        int tenure;
        double amount;
    public:
        LoanAccount();
        LoanAccount(string,string,int,double);
        double calculateIntrest();
        double get_amount() const;
        double get_rate() const;
        int get_tenure() const;
        void set_tenure(int);
        void display() const;
        static void set_intrest_rate(double);
};
#endif