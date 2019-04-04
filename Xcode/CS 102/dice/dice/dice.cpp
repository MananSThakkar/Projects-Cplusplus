
#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>

using namespace std;

int main() {
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 6);
    
    const size_t arraySize = 7;
    array<unsigned int, arraySize> dice1;
    array<unsigned int, arraySize> dice2;
    array<unsigned int, arraySize> dice3;
    int s1{0}; int s2{0}; int s3{0}; int s4{0}; int s5{0}; int s6{0};
    
    
    for (unsigned int roll =1; roll <= 60; ++roll) {
        ++dice1[randomInt(engine)];
        ++dice2[randomInt(engine)];
        ++dice3[randomInt(engine)];
       
        switch(randomInt(engine)){
            case 1: if(dice1[randomInt(engine)] ==
                       dice2[randomInt(engine)] || dice2[randomInt(engine)] ==
                       dice3[randomInt(engine)] || dice1[randomInt(engine)] ==
                       dice3[randomInt(engine)]){
                ++s1;}
            case 2: if(dice1[randomInt(engine)] ==
                       dice2[randomInt(engine)] || dice2[randomInt(engine)] ==
                       dice3[randomInt(engine)] || dice1[randomInt(engine)] ==
                       dice3[randomInt(engine)]){
                ++s2;}
            case 3: if(dice1[randomInt(engine)] ==
                       dice2[randomInt(engine)] || dice2[randomInt(engine)] ==
                       dice3[randomInt(engine)] || dice1[randomInt(engine)] ==
                       dice3[randomInt(engine)]){
                ++s3;}
            case 4: if(dice1[randomInt(engine)] ==
                       dice2[randomInt(engine)] || dice2[randomInt(engine)] ==
                       dice3[randomInt(engine)] || dice1[randomInt(engine)] ==
                       dice3[randomInt(engine)]){
                ++s4;}
            case 5: if(dice1[randomInt(engine)] ==
                       dice2[randomInt(engine)] || dice2[randomInt(engine)] ==
                       dice3[randomInt(engine)] || dice1[randomInt(engine)] ==
                       dice3[randomInt(engine)]){
                ++s5;}
            case 6: if(dice1[randomInt(engine)] ==
                       dice2[randomInt(engine)] || dice2[randomInt(engine)] ==
                       dice3[randomInt(engine)] || dice1[randomInt(engine)] ==
                       dice3[randomInt(engine)]){
                ++s6;}
            }
                
        }
    
    cout << "Face" << setw(7) << "dice1" << setw(7) << "dice2" << setw(7) << "dice3" << setw(7) << endl;
    

    for (size_t face = 1; face < arraySize; ++face){
        
        cout << setw(4) << face << setw(7) << dice1[face] <<setw(7) << dice2[face] << setw(7) << dice3[face]  << endl;
    }
    cout << "\nNo. atleast two same face: " << endl;
    cout << "Face 1: " << s1 << endl;
    cout << "Face 2: " << s2 << endl;
    cout << "Face 3: " << s3 << endl;
    cout << "Face 4: " << s4 << endl;
    cout << "Face 5: " << s5 << endl;
    cout << "Face 6: " << s6 << endl;
    
    }

