//
//  main.cpp
//  p06fib
//
//  Created by Manan Thakkar on 12/5/16.
//  Copyright © 2016 Manan Thakkar. All rights reserved.
//

// Project 6 - Calculating the Fibonacci Sequence.
#include <iostream>
using namespace std;
int main()
{
    int Num1 = 0;
    int Num2 = 0;
    int Num3 = 0;//represents the next no.
    
    cout << "Calculating Fibonacci Sequence." << endl;
    cout << "Enter first integer: ";
    cin >> Num1;
    
    cout << "Enter second integer: ";
    cin >> Num2;
    
    cout << Num1;
    int j = 0; // counter number for Num1
    while(j < Num1){
        cout << '*';
        j++;
    }
    cout << endl;
    
    cout << Num2;
    int k = 0; //  counter number for Num2
    while(k < Num2){
        cout << '*';
        k++;
    }
    cout << endl;
    
    
    while(Num1 + Num2 <= 100)
    {
        cout << Num1 + Num2;
        int i = 0; // counter number for Num3
        while(i < Num1 + Num2){
            cout << '*';
            i++;
        }
        cout << endl;
        
        Num3 = Num1 + Num2;
        Num1 = Num2;
        Num2 = Num3;
    }
    
    return 0;
}
