#ifndef BANK_HDR
#define BANK_HDR
#include"SavingsAccount.h"
#include"CheckingAccount.h"
#include"LoanAccount.h"
#include<vector>
#include<algorithm>

class Bank
{
    private:
        vector<Account*> account;
    public:
        Bank();
        void Add_Account(Account*);
        void Delete_Account(Account*);
        double calculate_total_intrest() const;
        void Display() const;
};
#endif