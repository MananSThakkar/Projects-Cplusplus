// BankDatabase.cpp
// Member-function definitions for class BankDatabase.
#include "BankDatabase.h" // BankDatabase class definition

// BankDatabase default constructor initializes accounts
BankDatabase::BankDatabase()
{
   // create two Account objects for testing
   Account account1(12345, 54321, 1000.0, 1200.0);
   Account account2(98765, 56789, 200.0, 200.0);

   // add the Account objects to the vector accounts
   accounts.push_back( account1 ); // add account1 to end of vector
   accounts.push_back( account2 ); // add account2 to end of vector
} // end BankDatabase default constructor

// retrieve Account object containing specified account number
Account * BankDatabase::getAccount( int accountNumber )
{
   // loop through accounts searching for matching account number
   for ( size_t i = 0; i < accounts.size(); i++ )
   {
      // return current account if match found
      if ( accounts[ i ].getAccountNumber() == accountNumber )
         return &accounts[ i ];
   } // end for

   return NULL; // if no matching account was found, return NULL
} // end function getAccount

// determine whether user-specified account number and PIN match
// those of an account in the database
bool BankDatabase::authenticateUser( int userAccountNumber, 
   int userPIN )
{
   // attempt to retrieve the account with the account number
   Account * const userAccountPtr = getAccount( userAccountNumber );

   // if account exists, return result of Account function validatePIN
   if ( userAccountPtr != NULL )
      return userAccountPtr->validatePIN( userPIN );
   else
      return false; // account number not found, so return false
} // end function authenticateUser

// return available balance of Account with specified account number
double BankDatabase::getTheChecking( double Checkings )
{
   Account * const userAccountPtr = getAccount( Checkings );
   return userAccountPtr->getTheChecking();
} // end function getAvailableBalance

// return total balance of Account with specified account number
double BankDatabase::getTheSavings( double Savings )
{
   Account * const userAccountPtr = getAccount( Savings );
   return userAccountPtr->getTheSavings();
} // end function getTotalBalance

// credit an amount to Account with specified account number
void BankDatabase::creditC( double Checkings, double amount )
{
   Account * const userAccountPtr = getAccount( Checkings );
   userAccountPtr->creditC( amount );
} // end function credit

// debit an amount from Account with specified account number
void BankDatabase::debitC( double Checking, double amountC )
{
   Account * const userAccountPtr = getAccount( Checking );
   userAccountPtr->debitC( amountC );
} // end function debit

void BankDatabase::creditS( double Savings, double amount )
{
    Account * const userAccountPtr = getAccount( Savings );
    userAccountPtr->creditS( amount );
} // end function credit

// debit an amount from Account with specified account number
void BankDatabase::debitS( double Savings, double amount )
{
    Account * const userAccountPtr = getAccount( Savings );
    userAccountPtr->debitS( amount );
} // end function debit

