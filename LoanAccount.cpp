#include"LoanAccount.h"

double LoanAccount::intrest_rate = 7;

//constructor
LoanAccount::LoanAccount(string name,string account_no,int tenure,double amount):Account(name,account_no)
{
    cout<<"Inside Parameterised LoanAccount Constructor!!"<<endl;
    this->amount = amount;
    this->tenure = tenure;
}

LoanAccount::LoanAccount():Account()
{
    cout<<"Inside Non Parameterised LoanAccount Constructor!!"<<endl;
    set_intrest_rate(0);
    tenure = 0;
    amount = 0;
}

//calculate intrest function
double LoanAccount::calculateIntrest()
{
    double P = get_amount();
    double r = intrest_rate;
    int t = get_tenure();

    double intrest = P*r*(t/12);

    return intrest;
}

//getter methods
double LoanAccount::get_rate() const
{
    return intrest_rate;
}

int LoanAccount::get_tenure() const
{
    return tenure;
}

double LoanAccount::get_amount() const
{
    return amount;
}

//setter methods
void LoanAccount::set_intrest_rate(double rate)
{
    intrest_rate = rate;
}

void LoanAccount::set_tenure(int months)
{
    tenure = months;
}

void LoanAccount::display() const
{
    Account::display();
    cout<<"Loan Amount: "<<amount<<endl;
    cout<<"Loan Tenure: "<<tenure<<" months"<<endl;
    cout<<"Intrest Rate: "<<intrest_rate<<endl;
}