//
//  main.cpp
//  p9vec
//
//  Created by Manan Thakkar on 12/5/16.
//  Copyright © 2016 Manan Thakkar. All rights reserved.
//

#include <iostream>
#include <vector>


using namespace std;

void   print_vector    (vector<int> v);
int    find_minimum    (vector<int> v);
double compute_average (vector<int> v);
int    how_many_evens  (vector<int> v);
int i = 0;
int main(){
    vector<int> v;
    v.push_back( 3); v.push_back( 5); v.push_back( 8);
    v.push_back( 2); v.push_back(10); v.push_back(-3);
    v.push_back( 7); v.push_back( 6); v.push_back( 4);
    v.push_back( 5);
    print_vector(v);
    cout << "The minimum is " << find_minimum(v) << "\n";
    cout << "The average is " << compute_average(v) << "\n";
    cout << "There are " << how_many_evens(v)
    << " even numbers.\n";
    return 0;
}
void print_vector(vector<int> v)
{
    cout << "Vector has " << v.size() << " elements.\n";
    for(int i = 0; i < v.size(); i++) {
        cout << "v["<< i << "] is "  <<  v.at(i) << endl;
    }
}
int find_minimum(vector<int> v){
    int smallest = v.at(0);
    for(int i = 1; i < v.size(); i++) {
        if(v.at(i) < smallest)
        {
            smallest = v.at(i);
        }
    }
    return smallest;
}
double compute_average (vector<int> v){
    float sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v.at(i);
    }
    return sum / v.size();
}
int how_many_evens  (vector<int> v){
    int even =0;
    for (int i = 0; i < v.size(); i++){
        if(v.at(i) % 2 == 0){
            even += 1 ;
        }}
    return even;
}
