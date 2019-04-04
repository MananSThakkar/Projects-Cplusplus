// Account.cpp
// Member-function definitions for class Account.
#include "Account.h" // Account class definition

// Account constructor initializes attributes
Account::Account( int theAccountNumber, int thePIN, 
   double theChecking, double theSavings )
   : accountNumber( theAccountNumber ),
     pin( thePIN ),
     Checking(theChecking),
     Savings(theSavings)
{
   // empty body
} // end Account constructor

// determines whether a user-specified PIN matches PIN in Account
bool Account::validatePIN( int userPIN ) const
{ 
   if ( userPIN == pin )
      return true;
   else
      return false;
} // end function validatePIN

// returns available balance
double Account::getTheChecking() const
{
   return Checking;
} // end function getAvailableBalance

// returns the total balance
double Account::getTheSavings() const
{
   return Savings;
} // end function getTotalBalance

// credits an amount to the account
void Account::creditC( double amount )
{
        Checking += amount; // add to total balance
} // end function credit

void Account::creditS( double amount )
{
    Savings += amount; // add to total balance
} // end function credit

// debits an amount from the account
void Account::debitC( double amount )
{
        Checking-=amount; // subtract from available balance
} // end function debit

void Account::debitS( double amount )
{
    Savings -= amount; // subtract from available balance
} // end function debit

// returns account number
int Account::getAccountNumber() const
{
   return accountNumber;  
} // end function getAccountNumber


