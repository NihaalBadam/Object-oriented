#ifndef SAVINGS_HDR
#include "Account.h"
#define SAVINGS_HDR

class SavingsAccount:public Account
{
    private:
        static double intrest_rate;
        int no_of_months;
    public:
        SavingsAccount();
        SavingsAccount(string,string,double);
        double calculateIntrest();
        static double get_intrest();
        static void set_rate(double);
        int get_time_period() const;
        void set_time_period(int);
        void display() const;
};
#endif