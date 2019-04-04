//
//  main.cpp
//  HW 1
//
//  Created by Manan Thakkar on 3/22/17.
//  Copyright © 2017 Manan Thakkar. All rights reserved.
//

#include <iostream>

using namespace std;


int mystery(int, int); // function prototype
//declaration of Funtion mystery with two paramteres (int)

int main() {
    
    cout << "Enter two integers: ";
    //output on screen
    int x{0};
    //introducing and declaring int x = 0;
    int y{0};
    //introducing and declaring int y = 0;
    
    cin >> x >> y;
    //user inputs x and y.
    cout << "The result is " << mystery(x, y) << endl;
    //output the result after the inpur by user
}

int mystery(int a, int b) {
    //carring out operations in declared fuction by calling it.
    //Declaratoin of name of parameters int i.e. a and b;
    
    if (1 == b) {
        //condition that if b is = 1
        return a;
        //then output the input a
    }
    
    else {
        return a + mystery(a, b - 1);
        //if the condition is not meet then this step is taken
    }
    
}
