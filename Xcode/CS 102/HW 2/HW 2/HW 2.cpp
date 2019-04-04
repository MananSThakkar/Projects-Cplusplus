//
//  main.cpp
//  HW 2
//
//  Created by Manan Thakkar on 3/22/17.
//  Copyright © 2017 Manan Thakkar. All rights reserved.
//

#include <iostream>
#include <iostream>
#include <iomanip> //in this program it is used to control the out of numbers after decimal point (setprecision)
#include <cmath> //performing calculations.

using namespace std;


int main() {
    
    cout << fixed << setprecision(1);
    //setting number of digits to be output after decimal i.e. "1" for this case.
    
    cout << "sqrt(" << 9.0 << ") = " << sqrt(9.0);
    //formula to output square root of 9.0 using cmath library.
    
    cout << "\nexp(" << 1.0 << ") = " << setprecision(6)
    //outputing "expt(1.0) and setting it decimal point length to 6 digits
    
    << exp(1.0) << "\nexp(" << setprecision(1) << 2.0
    //calculating exponential value of 1.0.
    
    << ") = " << setprecision(6) << exp(2.0);
    // setting decimal point limit to 6 and calculating output if exponent 2.0.
    
    cout << "\nlog(" << 2.718282 << ") = " << setprecision(1)
    //output statment and calculate log of number given.
    << log(2.718282)
    
    << "\nlog(" << setprecision(6) << 7.389056 << ") = "
    //output the statment with 6 numbers after decimal
    
    << setprecision(1) << log(7.389056);
    //calculation the log of given number.
    
    cout << "\nlog10(" << 10.0 << ") = " << log10(10.0)
    //ouput the statement and calculating log 10 of number (10.0).
    
    << "\nlog10(" << 100.0 << ") = " << log10(100.0);
    //ouput the statement and calculating log 10 of number (100.0)
    
    cout << "\nfabs(" << 5.1 << ") = " << fabs(5.1)
    //output the statment and just coverting any number to positive
    << "\nfabs(" << 0.0 << ") = " << fabs(0.0)
    //output the statment and print result as it is but incase (-) covert to positive.
    
    << "\nfabs(" << -8.76 << ") = " << fabs(-8.76);
    //output the statment and print result as it is but incase (-) covert to positive.
    
    cout << "\nceil(" << 9.2 << ") = " << ceil(9.2)
    //output the statement and rounding up the given number.
    
    << "\nceil(" << -9.8 << ") = " << ceil(-9.8);
    //output the statement and rounding up the given number.
    
    cout << "\nfloor(" << 9.2 << ") = " << floor(9.2)
    //output the statement and rounding down the given number.
    
    << "\nfloor(" << -9.8 << ") = " << floor(-9.8);
   //output the statement and rounding down the given number.
    
    cout << "\npow(" << 2.0 << ", " << 7.0 << ") = "
    ////output the statement.
    
    << pow(2.0, 7.0) << "\npow(" << 9.0 << ", "
    //calculating power the given number by 7.0 and output the statement.
    << 0.5 << ") = " << pow(9.0, 0.5);
    // calculating power of given number by 0.5.
    
    cout << setprecision(3) << "\nfmod("
    //output the statement.
    << 2.6 << ", " << 1.2 << ") = "
    // printing 2.6 , 1.2 ) =
    
    << fmod(2.6, 1.2) << setprecision(1);
    //it divides numerator by demnomenator and just output the roundup number after the decimal. in this case it will output 0.200.
    
    cout << "\nsin(" << 0.0 << ") = " << sin(0.0);
    //output the statement and calculate sine of given number.
    
    cout << "\ncos(" << 0.0 << ") = " << cos(0.0);
    //output the statement and calculate cosine of given number.
    
    cout << "\ntan(" << 0.0 << ") = " << tan(0.0) << endl;
    //output the statement and calculate tan of given number.
    
    
}
