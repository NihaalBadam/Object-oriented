#include"CheckingAccount.h"

double CheckingAccount::intrest_rate = 0.15;

//constructor
CheckingAccount::CheckingAccount(string name,string account_no,double balance):Account(name,account_no,balance),days(0)
{
    cout<<"Inside Parameterised CheckingAccount constructor!!"<<endl;
}

CheckingAccount::CheckingAccount():Account(),days(0)
{
    cout<<"Inside Non Parameterised CheckingAccount constructor!!"<<endl;
}

//calculate intrest
double CheckingAccount::calculateIntrest()
{
    //simple intrest
    double value= 0.0;

    value = intrest_rate*get_balance()*days;

    return value;
}

//getter methods
// double CheckingAccount::get_intrest()
// {
//     return intrest_rate;
// }

int CheckingAccount::get_days() const
{
    return days;
}

//settter method
// void CheckingAccount::set_rate(double rate)
// {
//     intrest_rate = rate;
// }

void CheckingAccount::set_days(int days)
{
    this->days = days;
}

//display
void CheckingAccount::display() const
{
    Account::display();
    cout<<"Intrest Rate: "<<intrest_rate<<endl;
    cout<<"Days: "<<days<<endl;
}