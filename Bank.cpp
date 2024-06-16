#include"Bank.h"

//Constructor
Bank::Bank()
{
    cout<<"Inside Bank Constructor!!"<<endl;
}

//Add Account
void Bank::Add_Account(Account *a)
{
    account.push_back(a);
    cout<<"Bank Account Added Successfully!!"<<endl;
}

//Remove Account
void Bank::Delete_Account(Account* a)
{
    auto i = find(account.begin(),account.end(),a);

    if(i != account.end())
    {
        account.erase(i);
        cout<<"Account Removed Succesfully!!"<<endl;
    }
    else
    {
        cout<<"Accoount Info not found!!"<<endl;
    }
}

//Calculate Total Intrest
double Bank::calculate_total_intrest() const
{
    double total_intrest = 0.0;

    for(int i=0;i<account.size();i++)
    {
        total_intrest += account[i]->calculateIntrest();
    }

    return total_intrest;
}

//Display
void Bank::Display() const
{
    for(int i=0;i<account.size();i++)
    {
        account[i]->display();
        cout<<endl;
    }
}