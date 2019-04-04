//
//  Credit.h
//  Credit Limit
//
//  Created by Manan Thakkar on 2/27/17.
//  Copyright © 2017 Manan Thakkar. All rights reserved.
//

#ifndef Credit_h
#define Credit_h

#include <string>

class Credit{
public:
    Credit(){}
    
    void setAccountnumber(double AccountNumber){
        accountnumber = AccountNumber;
    }
    void setOpeningbalance(double OpeningBalance){
        openingbalance = OpeningBalance;
    }
    void setTotalcharge(double TotalCharge){
        totalcharge = TotalCharge;
    }
    void setTotalcredit(double TotalCredit){
        totalcredit = TotalCredit;
    }
    void setCreditlimit(double CreditLimit){
        creditlimit = CreditLimit;
    }

    double getAccountnumber() const {
        return accountnumber;
    }
    double getOpeningbalance() const {
        return openingbalance;
    }
    double getTotalcharge() const {
        return totalcharge;
    }
    double getTotalcredit() const {
        return totalcredit;
    }
    double getCreditlimit() const {
        return creditlimit;
    }
    
private:
   
    double accountnumber;
    double openingbalance;
    double totalcharge;
    double totalcredit;
    double creditlimit;
};


#endif /* Credit_h */
