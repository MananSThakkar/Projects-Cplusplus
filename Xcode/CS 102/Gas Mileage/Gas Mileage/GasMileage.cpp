

#include <iostream>
#include "Mileage.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int j = 1;
    Mileage GasMileage[]{};
    double milesDriven = 0;
    double gallonsUsed = 0;
    double MPG = 0;
    double totalMPG = 0;
    double totalGallons = 0;
    double totalMiles = 0;
    int i;
    
    while (milesDriven >= 0) {
        for (int i = 0; i < j; i++) {
    
        cout << "\nEnter miles driven (-1 to quit): ";
        cin >> milesDriven;
            GasMileage[i].setMilesdriven(milesDriven);
        
        if (milesDriven == -1) {
            cout << "\nThank you for usnig the program :) ." << endl;
        }
        else{
            cout << "Enter Gallons used: ";
            cin >> gallonsUsed;
            GasMileage[i].setGallonsused(gallonsUsed);
            
            totalGallons = totalGallons + gallonsUsed;
            totalMiles = totalMiles + milesDriven;
            MPG = milesDriven / gallonsUsed;
            totalMPG = totalMiles / totalGallons;
            
            cout << "MPG this trip is: " << MPG << endl;
            cout << "Total MPG: " << totalMPG << endl;
        }
    }
    i++;
    j++;
    }
    
    return 0;
}
