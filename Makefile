CC = g++
CFLAGS = -Wall -std=c++11
TARGET = banking_system
OBJS = main.o Account.o SavingsAccount.o CheckingAccount.o LoanAccount.o Bank.o

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $(OBJS)

main.o: main.cpp
    $(CC) $(CFLAGS) -c main.cpp

Account.o: Account.cpp Account.h
    $(CC) $(CFLAGS) -c Account.cpp

SavingsAccount.o: SavingsAccount.cpp SavingsAccount.h Account.h
    $(CC) $(CFLAGS) -c SavingsAccount.cpp

CheckingAccount.o: CheckingAccount.cpp CheckingAccount.h Account.h
    $(CC) $(CFLAGS) -c CheckingAccount.cpp

LoanAccount.o: LoanAccount.cpp LoanAccount.h Account.h 
    $(CC) $(CFLAGS) -c LoanAccount.cpp

Bank.o: Bank.cpp Bank.h Account.h
    $(CC) $(CFLAGS) -c Bank.cpp

clean:
    rm -f $(OBJS) $(TARGET)