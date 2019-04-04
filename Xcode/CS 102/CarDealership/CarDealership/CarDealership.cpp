
#include <iostream>
#include <string>
#include <iomanip>
#include "Vehicle.h"

using namespace std;

int main(){
    const int j = 8;
    Vehicle Vehicle[j]{};
    string theName;
    string theType;
    int NofDoors;
    int maxSpeed;
    string CarColor;
    
       for(int i = 0; i < j ; i++) {
        cout << "\nPlease Enter The Name Of The Owner (" << i+1 <<"): ";
        getline(cin, theName);
        Vehicle[i].setName(theName);
        
        cout << "\nPlease Enter The Type Of Vehicle (" << i+1 << "): ";
        getline(cin, theType);
        Vehicle[i].setType(theType);
        
        cout << "\nPlease Enter The Color of Car (" << i+1 << "): ";
        getline(cin, CarColor);
        Vehicle[i].setColor(CarColor);
        
        cout << "\nPlease Enter Number Of Doors (" << i+1 << "): ";
        cin >> NofDoors;
        Vehicle[i].setDoors(NofDoors);
        
        cout << "\nPlease Enter The Maximum Speed (mph) (" << i+1 << "): ";
        cin >> maxSpeed;
        cin.ignore();
        Vehicle[i].setSpeed(maxSpeed);
    }
    cout << "\nInventory details: \n" << setw(25) << left << "Owner is: " << setw(25) << left << "Car Type: " << setw(25) << left << "Color of Car: " << setw(25) << left << "No. of Doors: " << setw(25) << left <<  "Top Speed is: "  << endl;
    
    int i = 0;
    while (i < j){
    cout << endl;
    cout << setw(26) << left << Vehicle[i].getName() << setw(26) << left << Vehicle[i].getType() << setw(25) << left  << Vehicle[i].getColor() << setw(25) << left << Vehicle[i].getDoors() << setw(25) << left << Vehicle[i].getSpeed()  << endl;
        i++;
    }
    
    
}
