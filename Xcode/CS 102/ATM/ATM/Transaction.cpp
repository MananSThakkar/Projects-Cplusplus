// Transaction.cpp
// Member-function definitions for class Transaction.
#include "Transaction.h" // Transaction class definition
#include "Screen.h" // Screen class definition
#include "BankDatabase.h" // BankDatabase class definition

// constructor initializes common features of all Transactions
Transaction::Transaction(int userAccountNumber, double Checkings, double Savings, Screen &atmScreen,
   BankDatabase &atmBankDatabase )
   :accountNumber(userAccountNumber),
    checkings(Checkings),
    savings(Savings),
     screen( atmScreen ),
     bankDatabase( atmBankDatabase )
{
   // empty body
} // end Transaction constructor

// return account number 
double Transaction::getTheCheckings() const
{
   return checkings;
} // end function getAccountNumber
double Transaction::getTheSavings() const
{
    return savings;
} // end function getAccountNumber

// return reference to screen
Screen &Transaction::getScreen() const
{
   return screen;
} // end function getScreen

// return reference to bank database
BankDatabase &Transaction::getBankDatabase() const
{
   return bankDatabase;
} // end function getBankDatabase

int Transaction::getAccountNumber() const
{
    return accountNumber;
} // end function getAccountNumber

