// Account.h
// Account class definition. Represents a bank account.
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   Account( int, int, double, double ); // constructor sets attributes
   bool validatePIN( int ) const; // is user-specified PIN correct?
   double getTheChecking() const; // returns available balance
   double getTheSavings() const; // returns total balance
   void creditC( double ); // adds an amount to the Account balance
   void debitC( double ); // subtracts an amount from the Account balance
    void creditS( double ); // adds an amount to the Account balance
    void debitS ( double ); // subtracts an amount from the Account balance
   int getAccountNumber() const; // returns account number
private:
   int accountNumber; // account number
   int pin; // PIN for authentication
   double Checking; // funds available for withdrawal
   double Savings; // funds available + funds waiting to clear
}; // end class Account

#endif
