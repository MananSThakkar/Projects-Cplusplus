//
//  main.cpp
//  p4convert
//
//  Created by Manan Thakkar on 12/5/16.
//  Copyright © 2016 Manan Thakkar. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string measurement;
    string target;
    float yards = 0;
    float meters = 0;
    float centimeters = 0;
    float inches = 0;
    float kilometers = 0;
    float miles = 0;
    float quantity = 0;
    
    
    cout << "Enter a unit in measurement: ";
    cin >> measurement;
    
    cout << " Enter a quantity: ";
    cin >> quantity;
    
    cout << "Enter a unit in measurement: ";
    cin >> target;
    
    
    if(measurement == "yards")
    {
        meters = quantity * 0.9144;
    }
    else if(measurement == "meters")
    {
        meters = quantity * 1;
    }
    else if(measurement == "centimeters")
    {
        meters = quantity * 0.01;
    }
    else if(measurement == "inches")
    {
        meters = quantity * 0.0254;
    }
    else if(measurement == "kilometers")
    {
        meters = quantity * 1000;
    }
    else if(measurement == "miles")
    {
        meters = quantity * 1609.34;
    }
    else
    {
        cout << "Sorry! I don't know about " << measurement << endl;
    }
    
    if(target == "yards")
    {
        cout << meters * 1.09361 << " yards" << endl;
    }
    else if(target == "meters")
    {
        cout << meters << " meters" << endl;
    }
    else if(target == "centimeters")
    {
        cout << meters * 100 << " centimeters" << endl;
    }
    else if(target == "inches")
    {
        cout << meters * 39.3701 << " inches" << endl;
    }
    else if(target == "kilometers")
    {
        cout << meters * 0.001 << " kilometers" << endl;
    }
    else if(target == "miles")
    {
        cout << meters * 0.000621371 << " miles" << endl;
    }
    else
    {
        cout << "Sorry! I don't know about " << measurement << endl;
    }
    return 0;
}
