#include"Account.h"

//Constructor
Account::Account(string name,string account_no,double balance)
{
    cout<<"Inside Parameterised Account Constructor!!"<<endl;
    this->name = name;
    this->account_no = account_no;
    this->balance = balance;
}

Account::Account():name('\0'),account_no('\0'),balance(0.0)
{
    cout<<"Inside Non Parameterised Constructor!!"<<endl;
}

//deposit function
void Account::Deposit(double amount)
{
    if(amount > 0)
    {
        balance += amount;    
        cout<<"Deposited Amount Successfully :)"<<endl;
    }
    else
    {
        cout<<"Invalid amount to deposit!!"<<endl;
    }
}

//withdrawal function
void Account::Withdrawal(double amount)
{
    balance += calculateIntrest();
    if(amount<=balance)
    {
        balance -= amount;  
        cout<<"Withdrawal Successfull :)"<<endl; 
    }
    else
    {
        balance -= calculateIntrest();
        cout<<"Insufficient Balance to withdraw :("<<endl;
    }
}

//getter methods
string Account::get_account_no() const
{
    return account_no;
}

string Account::get_name() const
{
    return name;
}

double Account::get_balance() const
{
    return balance;
}

//setter method
void Account::set_balance(double bal)
{
    balance = bal;
}

void Account::set_acc_no(string num)
{
    account_no = num;
}

void Account::set_name(string name)
{
    this->name = name;
}

//display function
void Account::display() const
{
    cout<<"Name of Account Holder: "<<name<<endl;
    cout<<"Account Number: "<<account_no<<endl;
    cout<<"Account Balance: "<<balance<<endl;
}