#include"Bank.h"

int main()
{
    Bank B1;
    SavingsAccount s1("Manav","123",1200);
    CheckingAccount c1("Manav","234",9000);
    LoanAccount l1("manav","456",30,120000);
    B1.Add_Account(&s1);
    B1.Delete_Account(&s1);
    B1.Add_Account(&c1);
    B1.Add_Account(&l1);

    B1.Display();
    
}