#include "Transaction.h"


double Transaction::Transaction_amount = 7;

//constructor
Transaction::Transaction(string name,string account_no,int tenure,double amount):Account(name,account_no)
{
    cout<<"Inside Parameterised LoanAccount Constructor!!"<<endl;
    this->amount = amount;
    this->tenure
    
}

Transaction::Transaction():Account()
{
    cout<<"Inside Non Parameterised LoanAccount Constructor!!"<<endl;
    set_transaction_amount(0);
    amount = 0;
}

//calculate transaction function
double Transaction::Transaction_amount()
{
    double P = get_amount();
    double r = get_transaction_amount();


    double Transaction = P*r*(t/12);

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

Transaction::Transaction()
{
}

double Transaction::get_transaction_amount() const
{
    return 0.0;
}

void Transaction::display() const
{
}