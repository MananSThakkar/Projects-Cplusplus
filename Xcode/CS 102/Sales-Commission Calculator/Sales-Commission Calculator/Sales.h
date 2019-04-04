//
//  Sales.h
//  Sales-Commission Calculator
//
//  Created by Manan Thakkar on 2/27/17.
//  Copyright © 2017 Manan Thakkar. All rights reserved.
//

#ifndef Sales_h
#define Sales_h

class Sales{
public:
    Sales(){}
    
    void setTotalsales(double SalesinDollars){
        Sale = SalesinDollars;
    }
    double getTotalsales() const {
        return Sale;
    }
    
private:
    double Sale;
};


#endif /* Sales_h */
