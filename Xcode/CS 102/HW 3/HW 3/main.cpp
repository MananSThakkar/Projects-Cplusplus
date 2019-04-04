//
//  main.cpp
//  HW 3
//
//  Created by Manan Thakkar on 3/22/17.
//  Copyright © 2017 Manan Thakkar. All rights reserved.
//

#include <iostream>

#include <cmath>

#include <cstdlib>

#include <ctime>

using namespace std;


enum class Type {ADDITION = 1, SUBTRACTION, MULTIPLICATION, DIVISION, RANDOM};


int generateProblem(unsigned int, Type); //Delcaration of function (prototype)

void correctMessage(); ////Delcaration of function (prototype)

void incorrectMessage(); ////Delcaration of function (prototype)

bool checkDone(unsigned int, unsigned int); ////Delcaration of function (prototype)


int main() {
    
    srand(static_cast<unsigned int>(time(0)));
    
    
    int response{0}; //declaring int with name "response" = 0
    
    unsigned int correct{0}; //declaring integer with name "correct" = 0 and it will be positive.
    
    unsigned int incorrect{0}; //declaring integer with name "incorrect" = 0 and it will be positive.
    
    unsigned int level{0}; //declaring integer with name "level" = 0 and it will be positive.
    
    int type; //declaring integer with name "type".
    
    
    do //this is used so program has to go through this even if it has nothing to do.
        
    {
        
        cout << "Choose type of problem to study." //output the statement
        
        << "\nEnter: 1 for addition, 2 for subtraction" //output the statement
        
        << "\nEnter: 3 for multiplication, 4 for division" //output the statement
        
        << "\nEnter: 5 for a combination of 1 through 4\n? "; //output the statement
        
        cin >> type; //user input the interger (type).
        
    } while (type < 1 || type > 5); //if the input is less then 1 and greater then 5, then program will go through while fucntion.
    
    Type problemType{static_cast<Type>(type)}; //static_cast is use to make coversion from int tp float and vice versa.
    
    
    cout << "Enter difficulty level: "; //output the statement.
    
    cin >> level; //user inputs the interger (level).
    
    
    
    while (response != -1) {//if the input not equal to -1, then program will go through while fucntion.

        
        int answer{generateProblem(level, problemType)}; //declaring interger with name "answer" and giving it parameters.
        
        cin >> response; //user input integer (response).
        
        
        while (response != -1 && response != answer) {//if the input not equal to -1 and response is not equal to he answer, then program will go through while fucntion.

            
            ++incorrect; //if the codition is meet increment the value of "incorrect".
            
            
            if (checkDone(correct, incorrect)) {//calling fuction checkdone.
                
                correct = 0; // intialize variable to zero in order to keep track of the incrementation
                
                incorrect = 0; // intialize variable to zero in order to keep track of the incrementation
                
                break; // stop only if the instruction above is matched
                
            }
            
            
            incorrectMessage(); // call of a functon !!
            
            cin >> response; //user input the integer (response).
            
        }
        
        if (response == answer) { //conditional statement
            
            ++correct; // increment the interger of "reponses".
            
            
            if (checkDone(correct, incorrect)) { //calling fuction checkdone.
                
                
                correct = 0; //initialization of variable to zero in order to keep track of the incrementation
                
                incorrect = 0; //initialization of variable to zero in order to keep track of the incrementation
                
                continue; //this function keeps tells the program if the condition are meet continus the program.
                
            }
            
            
            correctMessage(); //calling the variable correctMessage
            
        }
        
    }
    
    
    cout << "That's all for now. Bye." << endl; //output statement
    
}


int generateProblem(unsigned int level, Type type) {//calling the function.
    
    int max{static_cast<int>(pow(10.0, level))};
    
    int x{rand() % max}; // generate random number
    
    int y{rand() % max}; // generate random number
    
    
    if (type == Type::RANDOM) {
        
        type = static_cast<Type>(1 + rand() % 4); // intializing variable type
        
    }
    
    
    // generate problem based on requested problem type
    
    switch (type) { // conditional statment based on series of cases
            
        case Type::ADDITION: // call addition which is a type of type due to ennu
            
            cout << "How much is " << x << " plus " << y << "\n? "; // output statement
            
            return x + y; // retuning the answer of x + y
            
        case Type::SUBTRACTION: // call subtraction which is a type of type due to ennu
            
            if (x < y) { // check if it will be negative and swap
                
                int temp{x};// variable temp containing x
                
                x = y; // setting equal to y
                
                y = temp; // AND Y to temp thus temp = x
                
            }
            
            
            cout << "How much is " << x << " minus " << y << "\n? "; //output statment
            
            return x - y; // giving the answer of x - y
            
        case Type::MULTIPLICATION: // call addition which is a type of addition due to ennu
            
            cout << "How much is " << x << " times " << y << "\n? "; // output statement
            
            return x * y; // returning x * y
            
        case Type::DIVISION: // call division which is a type of addition due to ennu
            
            while (y == 0) { // eliminate divide by zero error
                
                y = rand() % max; // set up y to a ramdom number
                
            }
            
            
            x *= y; // create "nice" division
            
            cout << "How much is " << x << " divided by " << y << "\n? "; // output statement
            
            return x / y; // returning x divided by y
            
        case Type::RANDOM:
            <#code#>
            break;
    }
}


// correctMessage randomly chooses response to correct answer

void correctMessage() { // function intialization
    
    // generate random number between 0 and 3
    
    switch (rand() % 4) //conditional statment, rand module 4 as parameter
    
    {
            
        case 0: // cases of conditionl
            
            cout << "Very good!";
            
            break; // stop only if case true
            
        case 1: // cases of conditionl
            
            cout << "Excellent!"; //output statement
            
            break; // stop only if case true
            
        case 2: // cases of conditionl
            
            cout << "Nice work!"; //output statement
            
            break; // stop only if case true
            
        case 3: // cases of conditionl
            
            cout << "Keep up the good work!"; //output statement
            
            break; // stop only if case true
            
    }
    
    
    cout << endl << endl; // new line , new line
    
}


// incorrectMessage randomly chooses response to incorrect answer

void incorrectMessage() { // function intializatiob
    
    // generate random number between 0 and 3
    
    switch (rand() % 4) { //conditional statment, rand module 4 as parameter
            
        case 0:  // cases of conditionl if answer is 0
            
            cout << "No. Please try again."; //output statement
            
            break; // stop only if case true
            
        case 1: // cases of condition if answer is 1
            
            cout << "Wrong. Try once more."; //output statement
            
            break; // stop only if case true
            
        case 2: // cases of condition if answer is 2
            
            cout << "Don't give up!"; //output statement
            
            break;
            
        case 3: // cases of conditionl if answer is 3
            
            cout << "No. Keep trying.";//output statement
            
            break;  // stop only if case true
            
    }
    
    
    cout << endl << "? "; // output statement
    
}


// based on number of correct and incorrect, print

// result and return true if student's turn is over

bool checkDone(unsigned int right, unsigned int wrong) {
    
    // if we've reached a total of 10 responses
    
    if (right + wrong == 10) { // conditional statement
        
        // check whether student got 75% correct or not
        
        if (static_cast<double>(right) / (right + wrong) < .75) {
            
            cout << "Please ask your teacher for extra help.\n\n"; //output statement
            
        }
        
        else {
            
            cout << "Congratulations, you are ready to go " //output statement
            
            << "to the next level!\n\n"; //output statement
            
        }
        
        
        return true; // boolean meaning well excuted
        
    }
    
    
    return false;
    
}
