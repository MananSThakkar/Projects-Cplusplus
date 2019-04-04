//
//  main.cpp
//  p2distance
//
//  Created by Manan Thakkar on 12/5/16.
//  Copyright © 2016 Manan Thakkar. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    int meters = 0;
    float kilometers = 0;
    float miles = 0;
    float feets = 0;
    float inches = 0;
    
    cout << "Enter distance in meters: ";
    cin  >> meters;
    
    kilometers = 0.001 * meters;
    miles     = 0.00062 * meters;
    feets     = 3.28 * meters;
    inches    = 39.37 * meters;
    
    cout << "Enter distance in meters: " << meters << endl;
    cout << "That is " << kilometers << " kilometers," << endl;
    cout << miles << " miles," << endl;
    cout << feets << " feet, or" << endl;
    cout << inches << " inches." << endl;
    
    return 0;
}
