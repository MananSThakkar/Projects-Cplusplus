//
//  main.cpp
//  pratice
//
//  Created by Manan Thakkar on 3/8/17.
//  Copyright © 2017 Manan Thakkar. All rights reserved.
//

#include <iostream>
#include <array>

using namespace std;

void staticArrayInit();
void automaticArrayInit();
const size_t arraySize{3};

int main(int argc, const char * argv[]) {
    cout << "First call to each function:\n";
    staticArrayInit();
    automaticArrayInit();
    
    cout << "\n\nSecond call to each function:\n";
    staticArrayInit();
    automaticArrayInit();
    cout << endl;
}
void staticArrayInit(void) {
    static array<int, arraySize> array1;
    cout << "\nValues on entering staticArrayInit:\n";
    
    for(size_t i{0}; i < array1.size(); ++i){
        cout << "array1[" << i << "] = " << array1[i] << " ";
    }
    cout << "\nValues on existing staticArrayInit:\n";
    
    for (size_t j{0}; j < array1.size(); ++j){
        cout << "array1[" << j << "] = " << (array1[j] += 5) << " ";
    }
    cout << endl;
}
void automaticArrayInit(void) {
    static array<int, arraySize> array2{1,2,3};
    cout << "\nValues on entering automaticArrayInit:\n";
    
    for(size_t i{0}; i < array2.size(); ++i){
        cout << "array2[" << i << "] = " << array2[i] << " ";
    }
    cout << "\nValues on existing automaticArrayInit:\n";
    
    for (size_t j{0}; j < array2.size(); ++j){
        cout << "array2[" << j << "] = " << (array2[j] += 5) << " ";
    }

}

