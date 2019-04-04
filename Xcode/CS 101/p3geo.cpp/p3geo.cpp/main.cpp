//
//  main.cpp
//  p3geo.cpp
//
//  Created by Manan Thakkar on 12/5/16.
//  Copyright © 2016 Manan Thakkar. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double latA = 0;
    double latB = 0;
    double lonA = 0;
    double lonB = 0;
    double dlat = 0;
    double dlon = 0;
    double R1 = 0;
    double R2 = 0;
    double a = 0;
    double d = 0;
    int R = 0;
    double km = 0;
    double miles = 0;
    
    latA = latA + 40.690;
    lonA = lonA - 73.980;
    
    cout << "Enter the latitude: ";
    cin >> latB;
    cout << "Enter the longitude: ";
    cin >> lonB;
    
    dlat = latA - latB;
    dlon = lonA - lonB;
    R1 = dlat / 2 * 2 * M_PI / 360;
    R2 = dlon / 2 * 2 * M_PI / 360;
    latA = latA * 2 * M_PI / 360;
    latB = latB * 2 * M_PI / 360;
    R = R + 6373;
    
    
    a = (sin(R1)) * (sin(R1)) + cos(latA) * cos(latB) * (sin(R2)) * (sin(R2));
    d = 2 * R * atan2(sqrt(a), sqrt(1-a));
    
    km = d;
    miles = km * 0.6213;
    
    cout << "The distance to LIU is: ";
    cout << km << " km" << endl;
    cout << "which is " << miles << " miles." << endl;
    
    
    
    return 0;
}
