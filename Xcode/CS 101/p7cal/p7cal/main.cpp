//
//  main.cpp
//  p7cal
//
//  Created by Manan Thakkar on 12/5/16.
//  Copyright © 2016 Manan Thakkar. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int year = 0;
    int month = 0;
    int y = 0;
    int dayOfWeek = 0;
    int endDay = 31;
    int numDays = 1;
    
    cout << "Calender (1900 and above)" << endl;
    
    for(;;)
    {
        cout << "Enter year (1900<): ";
        cin >> year;
        if(year >= 1900) break;
        cout << "Error, out of range." << endl;
    }
    for(;;)
    {
        cout << "Enter month (1-12): ";
        cin >> month;
        if(month >= 1 && month <= 12) break;
        cout << "Error, out of range." << endl;
    }
    cout << endl;
    
    switch(month) {
        case  1: cout << "**January "<< year << "**" ;  break;
        case  2: cout << "**February "<< year << "**" ; break;
        case  3: cout << "**March "<< year << "**";     break;
        case  4: cout << "**April "<< year << "**" ;    break;
        case  5: cout << "**May "<< year << "**";       break;
        case  6: cout << "**June "<< year << "**";      break;
        case  7: cout << "**July "<< year << "**";      break;
        case  8: cout << "**August "<< year << "**";    break;
        case  9: cout << "**September "<< year << "**"; break;
        case 10: cout << "**October "<< year << "**";   break;
        case 11: cout << "**November "<< year << "**";  break;
        case 12: cout << "**December "<< year << "**";  break;
    }
    cout << endl;
    
    cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
    cout << "---------------------------" << endl;
    
    int maxDay;
    
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12 ){
        
        maxDay = 31;
    }
    
    if(month==2){
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0){
                    maxDay = 29;
                }
                
                else{
                    maxDay = 28;
                }
            }
            else{
                maxDay = 29;
            }
        }
        else{
            maxDay = 28;
        }
    }
    if(month==4||month==6||month==9||month==11){
        maxDay = 30;
    }
    
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y = year - (month < 3);
    dayOfWeek = (y + y/4 - y/100 + y/400 + t[month-1] + 1) % 7;
    
    cout << setw(dayOfWeek*4) << "";  // indent
    
    while(numDays <= maxDay){
        cout << setw(2) << numDays << setw(2) << "  ";
        switch(dayOfWeek){
            case 0: if(numDays==7||numDays==14||numDays==21||numDays==28) {
                cout << endl;}
                break;
            case 1: if(numDays%7 == 6){
                cout << endl;}
                break;
            case 2: if(numDays%7 == 5) {
                cout << endl;}
                break;
            case 3: if(numDays%7 == 4){
                cout << endl;}
                break;
            case 4: if(numDays%7 == 3){
                cout << endl;}
                break;
            case 5: if(numDays%7 == 2){
                cout << endl;}
                break;
            case 6: if(numDays%7 == 1){
                cout << endl;}
                break;
        }
        numDays++;
    }
    cout << endl;
    
    return 0;
}
