//
//  main.cpp
//  Sales-Commission Calculator
//
//  Created by Manan Thakkar on 2/27/17.
//  Copyright © 2017 Manan Thakkar. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Sales.h"

using namespace std;
int main(int argc, const char * argv[]) {
    
    int j= 1;
    Sales Salary[]{};
    double salary;
    double totalSales;
    int i;
    
    while(totalSales >= 0){
        
        for (int i = 0; i<j; i++){
        
        cout << "\nEnter Totat Sales in Dollars: ";
        cin >> totalSales;
        Salary[i].setTotalsales(totalSales);
    
        if(totalSales == -1 ) {
            cout << "\nThank you for usnig the program :)." << endl;
        }
            else{
                salary =(0.09 * totalSales) + 200;
                
                cout << "Salary is: "<< setprecision( 2 ) << fixed << salary << endl;
                
            }
        }
        
        i++;
        j++;
    }
    return 0;
}
