// BalanceInquiry.cpp
// Member-function definitions for class BalanceInquiry.
#include "BalanceInquiry.h" // BalanceInquiry class definition
#include "Screen.h" // Screen class definition
#include "BankDatabase.h" // BankDatabase class definition


// BalanceInquiry constructor initializes base-class data members
BalanceInquiry:: BalanceInquiry( int userAccountNumber, double Checkings, double Savings, Screen &atmScreen,
   BankDatabase &atmBankDatabase )
   : Transaction(userAccountNumber , Checkings, Savings, atmScreen, atmBankDatabase )
{
   // empty body
} // end BalanceInquiry constructor

// performs transaction; overrides Transaction's pure virtual function
void BalanceInquiry::execute(int Checkings = 'c', int Savings = 's')
{
   // get references to bank database and screen
   BankDatabase &bankDatabase = getBankDatabase();
   Screen &screen = getScreen();
    
   // get the available balance for the current user's Account
   double checking =
      bankDatabase.getTheChecking( getAccountNumber() );
    
    double savings =
    bankDatabase.getTheSavings( getAccountNumber() );
    
    // get the total balance for the current user's Account
    
    
   // display the balance information on the screen
    if(acc == 'c') {
        screen.displayMessageLine( "\nBalance Information:" );
        screen.displayMessage( "\n - Checking balance: " );
        screen.displayDollarAmount( checking );
    }
    else if(acc=='s'){
        screen.displayMessageLine( "\nBalance Information:" );
        screen.displayMessage( "\n - Savings balance: " );
        screen.displayDollarAmount( savings );
    }
}
    // end function execute
