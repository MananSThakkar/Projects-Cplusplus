//
//  main.cpp
//  practice
//
//  Created by Manan Thakkar on 2/22/17.
//  Copyright © 2017 Manan Thakkar. All rights reserved.
//

#include <iostream>
#include "cmath"
#include <iomanip>

using namespace std;
int main(int argc, const char * argv[]) {

    double a;
    double p;
    double r;
    int n = 11;

    cout << setprecision(2) << fixed << endl;
    cout << "Enter Principle amount: ";
    cin >> p;

    cout << "Enter Rate of Interset: ";
    cin >> r;
    r /= 100;
    cout << "\nYear" << setw(20) << "Amount on deposit" << endl;
    
    for (int i = 1; i < n; i++)
    {
        a = p * pow((1+r), i);
        
        cout << right << setw(4) << i << right << setw(20) << a << endl;
    
    }
    
    return 0;
}
