//
//  main.cpp
//  Credit Limit
//
//  Created by Manan Thakkar on 2/27/17.
//  Copyright © 2017 Manan Thakkar. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "Credit.h"

using namespace std;
int main(int argc, const char * argv[]) {
    
    int j = 1;
    Credit CreditLimit[]{};
    int      accountNumber;
    double   openingBalance;
    double   totalCharges;
    double   totalCredits;
    double   creditLimit;
    double   newBalance;
    int i;
    
    cout << "Welcome to Credit Limit" << endl;
    cout << setprecision( 2 ) << fixed;
    
    while( accountNumber >= 0 ) {
        for(int i=0; i < j; i++){
        
        cout << "\nPlease enter customer account Number (or -1 to Quit): ";
        cin >> accountNumber;
            CreditLimit[i].setAccountnumber(accountNumber);
        
        if (accountNumber == -1) {
            cout << "\nThank you for usnig the program :)." << endl;
        }
        else{
            cout << "Enter beginning balance: ";
            cin >> openingBalance;
            CreditLimit[i].setOpeningbalance(openingBalance);
            
            cout << "Enter total charges: ";
            cin >> totalCharges;
            CreditLimit[i].setTotalcharge(totalCharges);
            
            cout << "Enter total credit: ";
            cin >> totalCredits;
            CreditLimit[i].setTotalcredit(totalCredits);
            
            cout << "Enter credit limit: ";
            cin >> creditLimit;
            CreditLimit[i].setCreditlimit(creditLimit);
            
            newBalance = openingBalance + totalCharges - totalCredits;
            cout << "New balance is: " << newBalance << endl;
            
            
            if (newBalance >= creditLimit) {
                cout << "\nAccount: " << accountNumber << endl;
                cout << "Credit limit: " << creditLimit << endl;
                cout << "Balance: " << newBalance << endl;
                cout << "Credit Limit Exceeded" << endl;
            }
        }
        cout << endl;
    }
        ///i++;
        j++;
        
    }
    

    return 0;
}
