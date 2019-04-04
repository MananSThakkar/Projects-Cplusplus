//
//  main.cpp
//  p5time
//
//  Created by Manan Thakkar on 12/5/16.
//  Copyright © 2016 Manan Thakkar. All rights reserved.
//

// Manan Thakkar
//Project 5 - Conversion  of time from 24 hour format to 12 hour format. Modifications for adding you name at the start for user.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int hours_24 = 0;  //represent 24 hours.
    int hours_12 = 0; //represents 12 hours.
    int minutes = 0;
    string name;
    
    cout << "Enter you name: ";
    getline(cin, name);       //cin >> name;
    cout << "Welcome! " << name << "." << endl;
    
    cout << "Enter hour (0-23): ";
    cin >> hours_24;
    
    cout << "Enter Minutes (0-59): ";
    cin >> minutes;
    
    if(hours_24 > 23) {
        cout << "Sorry! Your input is invalid. Please try again.";
        return 0;
    }
    else if(minutes > 59){
        cout << "Sorry! Your input is invalid. Please try again.";
        return 0;
    }
    
    cout << hours_24 << ":";
    if(minutes < 10) {
        cout << "0";
    }
    cout << minutes;
    
    if(hours_24 > 12){
        hours_12 = hours_24 - 12;
    }
    else if(hours_24 <= 12){
        hours_12 = hours_24;
    }
    if(hours_24 == 0){
        hours_12 = hours_24 + 12;
    }
    
    cout << " is " << hours_12 << ":";
    if(minutes < 10) {
        cout << "0";
    }
    cout << minutes;
    if(hours_24 >= 12){
        cout << " PM" << endl;
    }
    else if(hours_24 < 12){
        cout << " AM" << endl;
    }
    else if(hours_24 = 0){
        cout << " AM" << endl;
    }
    cout << endl;
    
    if(minutes <= 7){
        minutes = hours_12;
    }
    else if (minutes <= 22){
        cout << "Quarter past";
    }
    else if (minutes <= 37){
        cout << "Half past";
    }
    else if (minutes <= 52){
        cout << "3 Quarter past";
    }
    else if (minutes <= 59) {
        minutes = hours_12;
        hours_12++; // treat as next hour
        hours_24++;
        if(hours_12 > 12) hours_12 = 1;
        if(hours_24 > 23) hours_24 = 0;
    }
    
    
    
    switch(hours_12){
        case  1: cout << " one";    break;
        case  2: cout << " two";    break;
        case  3: cout << " three";  break;
        case  4: cout << " four";   break;
        case  5: cout << " five";   break;
        case  6: cout << " six";    break;
        case  7: cout << " seven";  break;
        case  8: cout << " eight";  break;
        case  9: cout << " nine";   break;
        case 10: cout << " ten";    break;
        case 11: cout << " eleven"; break;
    }
    
    switch(hours_24) {
        case 0:
            cout << " midnight";
            break;
        case 12:
            cout << " noon";
            break;
        case 13: case 14:
        case 15: case 16: case 17:
            cout << " in the afternoon";
            break;
        case 18: case 19: case 20:
        case 21: case 22: case 23:
            cout << " in the evening";
            break;
        default:
            cout << " in the morning";
    }
    cout << endl;
    
    if(hours_24 <= 23) {
        cout << "Thank You! and Have a good day!";
    }
    return 0;
}
