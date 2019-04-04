#ifndef Vehicle_h
#define Vehicle_h

#include <string>
#include <iostream>

class Vehicle{
public:
    Vehicle(){}
    Vehicle(std::string TypeOfVehicle, int NumberOfDoors, int MaximumSpeed, std:: string OwnerName,
            std:: string ColorOfCar)
    : type{TypeOfVehicle}, doors{NumberOfDoors}, topspeed{MaximumSpeed}, name{OwnerName}, color{ColorOfCar} {
    }
    
    void setType(std::string TypeOfVehicle){
        type = TypeOfVehicle;
    }
    void setDoors(int NumberOfDoors){
        doors = NumberOfDoors;
    }
    void setSpeed(int MaximumSpeed){
        topspeed = MaximumSpeed;
    }
    void setName(std::string OwnerName){
        name = OwnerName;
    }
    void setColor(std::string ColorOfCar){
        color = ColorOfCar;
    }

    
    std::string getType() const {
        return type;
    }
    
    int getDoors() const {
        return doors;
    }
    
    int getSpeed() const {
        return topspeed;
    }
    
    std::string getName() const {
        return name;
    }
    
    std::string getColor() const {
        return color;
    }
private:
    std::string type;
    int doors;
    int topspeed;
    std::string name;
    std::string color;
};

#endif /* Vehicle_h */

