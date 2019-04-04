// ATM.cpp
// Member-function definitions for class ATM.
#include "ATM.h" // ATM class definition
#include "Transaction.h" // Transaction class definition
#include "BalanceInquiry.h" // BalanceInquiry class definition
#include "Withdrawal.h" // Withdrawal class definition
#include "Deposit.h" // Deposit class definition

// enumeration constants represent main menu options
enum MenuOption { BALANCE_INQUIRY_Checking = 1, BALANCE_INQUIRY_Savings, WITHDRAWAL_Checking, WITHDRAWAL_Savings, DEPOSIT_Checking, DEPOSIT_Savings, EXIT };

// ATM default constructor initializes data members
ATM::ATM() 
   : userAuthenticated ( false ), // user is not authenticated to start
     currentAccountNumber( 0 ), // no current account number to start
    Checkings(),
    Savings()
{
   // empty body
} // end ATM default constructor

// start ATM 
void ATM::run()
{
   // welcome and authenticate user; perform transactions
   while ( true )
   {
      // loop while user is not yet authenticated
      while ( !userAuthenticated ) 
      {
         screen.displayMessageLine( "\nWelcome!" );       
         authenticateUser(); // authenticate user
      } // end while
      
      performTransactions(); // user is now authenticated 
      userAuthenticated = false; // reset before next ATM session
      currentAccountNumber = 0; // reset before next ATM session 
      screen.displayMessageLine( "\nThank you! Goodbye!" );
   } // end while   
} // end function run

// attempt to authenticate user against database
void ATM::authenticateUser() 
{
   screen.displayMessage( "\nPlease enter your account number: " );
   int accountNumber = keypad.getInput(); // input account number
   screen.displayMessage( "\nEnter your PIN: " ); // prompt for PIN
   int pin = keypad.getInput(); // input PIN
   
   // set userAuthenticated to bool value returned by database
   userAuthenticated = 
      bankDatabase.authenticateUser( accountNumber, pin );
   
   // check whether authentication succeeded
   if ( userAuthenticated )
   {
      currentAccountNumber = accountNumber; // save user's account #
   } // end if
   else
      screen.displayMessageLine( 
         "Invalid account number or PIN. Please try again." );
} // end function authenticateUser

// display the main menu and perform transactions
void ATM::performTransactions() 
{
   // local pointer to store transaction currently being processed
   Transaction *currentTransactionPtr = nullptr;
   
   bool userExited = false; // user has not chosen to exit

   // loop while user has not chosen option to exit system
   while ( !userExited )
   {     
      // show main menu and get user selection
      int mainMenuSelection = displayMainMenu();
       
      // decide how to proceed based on user's menu selection
      switch ( mainMenuSelection )
      {
         // user chose to perform one of three transaction types
         case BALANCE_INQUIRY_Checking:
              currentTransactionPtr->Transaction::setAcc('c');
          case BALANCE_INQUIRY_Savings:
              currentTransactionPtr->Transaction::setAcc('s');
         case WITHDRAWAL_Checking:
          case WITHDRAWAL_Savings:
         case DEPOSIT_Checking:
          case DEPOSIT_Savings:
            // initialize as new object of chosen type
            currentTransactionPtr = 
               createTransaction( mainMenuSelection );

              currentTransactionPtr->execute(Checkings = 'c', Savings = 's');// execute transaction

            // free the space for the dynamically allocated Transaction
            delete currentTransactionPtr;
            
            break; 
         case EXIT: // user chose to terminate session
            screen.displayMessageLine( "\nExiting the system..." );
            userExited = true; // this ATM session should end
            break;
         default: // user did not enter an integer from 1-4
            screen.displayMessageLine( 
               "\nYou did not enter a valid selection. Try again." );
            break;
      } // end switch
   } // end while
} // end function performTransactions

// display the main menu and return an input selection
int ATM::displayMainMenu() const
{
   screen.displayMessageLine( "\nMain menu:" );
   screen.displayMessageLine( "1 - View my balance for Checking" );
    screen.displayMessageLine( "2 - View my balance for Savings" );
   screen.displayMessageLine( "3 - Withdraw cash from Checking" );
    screen.displayMessageLine( "4 - Withdraw cash from Savings" );
   screen.displayMessageLine( "5 - Deposit funds to Checking" );
    screen.displayMessageLine( "6 - Deposit funds to Savings" );
   screen.displayMessageLine( "7 - Exit\n" );
   screen.displayMessage( "Enter a choice: " );
   return keypad.getInput(); // return user's selection
} // end function displayMainMenu
      
// return object of specified Transaction derived class
Transaction *ATM::createTransaction( int type )
{
   Transaction *tempPtr = nullptr; // temporary Transaction pointer
   
   // determine which type of Transaction to create     
   switch ( type )
   {
      case BALANCE_INQUIRY_Checking: // create new BalanceInquiry transaction
         tempPtr = new BalanceInquiry(
            currentAccountNumber, Checkings, Savings, screen, bankDatabase );
         break;
       case BALANCE_INQUIRY_Savings: // create new BalanceInquiry transaction
           tempPtr = new BalanceInquiry(
            currentAccountNumber, Checkings, Savings, screen, bankDatabase );
           break;
      case WITHDRAWAL_Checking: // create new Withdrawal transaction
         tempPtr = new Withdrawal( currentAccountNumber, Checkings, Savings, screen,
            bankDatabase, keypad, cashDispenser );
         break;
       case WITHDRAWAL_Savings: // create new Withdrawal transaction
           tempPtr = new Withdrawal( currentAccountNumber, Checkings, Savings, screen,
            bankDatabase, keypad, cashDispenser );
           break;
      case DEPOSIT_Checking: // create new Deposit transaction
         tempPtr = new Deposit( currentAccountNumber, Checkings, Savings, screen,
            bankDatabase, keypad, depositSlot );
         break;
       case DEPOSIT_Savings: // create new Deposit transaction
           tempPtr = new Deposit( currentAccountNumber, Checkings, Savings, screen,
            bankDatabase, keypad, depositSlot );
           break;
   } // end switch

   return tempPtr; // return the newly created object
} // end function createTransaction

