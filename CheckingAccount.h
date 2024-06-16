#ifndef CHECKING_HDR
#define CHECKING_HDR
#include"Account.h"

class CheckingAccount:public Account
{
    private:
        static double intrest_rate;
        int days;
    public:
        CheckingAccount();
        CheckingAccount(string,string,double);
        double calculateIntrest();
        static double get_intrest();
        int get_days() const;
        static void set_rate(double);
        void set_days(int);
        void display() const;
};
#endif