#include"SavingsAccount.h"

double SavingsAccount::intrest_rate = 2.68;

//constructor
SavingsAccount::SavingsAccount(string name,string account_no,double balance):Account(name,account_no,balance)
{
    cout<<"Inside Parameterised SavingsAccount Constructor"<<endl;
    no_of_months = 0;
}

SavingsAccount::SavingsAccount():no_of_months(0)
{
    cout<<"Inside Non Parameterised SavingsAccount Constructor"<<endl;
}

double SavingsAccount::calculateIntrest()
{
    double value= 0.0;

    value = get_intrest()*get_balance()*no_of_months;

    return value;
}

//getter method
double SavingsAccount::get_intrest()
{
    return SavingsAccount::intrest_rate;
}

int SavingsAccount::get_time_period() const
{
    return no_of_months;
}

//settter method
void SavingsAccount::set_rate(double rate)
{
    SavingsAccount::intrest_rate = rate;
}

void SavingsAccount::set_time_period(int months)
{
    no_of_months = months;
}

void SavingsAccount::display() const
{
    Account::display();
    cout<<"Intrest Rate: "<<intrest_rate<<endl;
    cout<<"Months: "<<no_of_months<<endl;
}