//
//  Mileage.h
//  Gas Mileage
//
//  Created by Manan Thakkar on 2/27/17.
//  Copyright © 2017 Manan Thakkar. All rights reserved.
//

#ifndef Mileage_h
#define Mileage_h

class Mileage{
public:
    Mileage(){}
    
    void setMilesdriven(double MilesDriven){
        milesdriven = MilesDriven;
    }
    void setGallonsused(double GallonsUsed){
        gallonsused = GallonsUsed;
    }
    
    double getMilesdriven() const {
        return milesdriven;
    }
    double getGallonsused() const {
        return gallonsused;
    }
    
private:
    double milesdriven;
    double gallonsused;
    
    
    
    
    
    
};
#endif /* Mileage_h */
