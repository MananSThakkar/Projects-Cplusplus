//
//  main.cpp
//  p10dice.cpp
//
//  Created by Manan Thakkar on 12/5/16.
//  Copyright © 2016 Manan Thakkar. All rights reserved.
//

#include <iostream>

// Yahtzee game -- Manan Thakkar
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int  roll_one_die();
vector<int> roll_all_dice(int num);
void roll_these_again(vector<int>& dice, string which);
void print_dice(vector<int> dice);
void print_best_hand(vector<int> dice);
bool n_of_a_kind(vector<int> tally, int n);
int  num_pairs(vector<int> tally);

int main()
{
    cout << "WELCOME TO Yahtzee!" << endl;
    srand(time(NULL));          // Initialize PRNG
    const int NUM_DICE = 5;
    vector<int> dice = roll_all_dice(NUM_DICE);
    int rolls_left = 2;
    cout << "Rolls left: " << rolls_left << endl;
    while(true)
    {
        print_dice(dice);
        print_best_hand(dice);
        if(rolls_left == 0)
        {
            break;
        }
        cout << "Which to roll again? ";
        string selected;
        getline(cin, selected);
        roll_these_again(dice, selected);
        rolls_left--;
        cout << "Rolls left: " << rolls_left << endl;
    }
    cout << "GAME OVER" << endl;
    return 0;
}

int roll_one_die()
{
    return rand()%6+1;
}

vector<int> roll_all_dice(int num)
{
    vector<int> dice;
    for(int i=0; i<num; i++){
        dice.push_back(roll_one_die());
    }
    return dice;
}

void print_dice(vector<int> dice)
{
    int a = 97;
    for(int i = 0; i<dice.size();i++){
        cout << "(" << char(a) << ") " << dice[i] << endl;
        a++;
    }
}

void roll_these_again(vector<int>& dice, string which)
{
    for(int j = 0; j < which.size(); j++) {
        char letter = which.at(j);
        int k = letter - 97;
        dice[k] = roll_one_die();
    }
}

void print_best_hand(vector<int> dice)
{
    vector<int> tally(7);
    for(int i=0; i<dice.size();i++){
    
    tally.at(dice.at(i))++;
    }
    if(n_of_a_kind(tally, 5)) {
        cout << "GREAT! Yahtzee."<<endl;
    }
    else if (n_of_a_kind(tally, 4)) {
        cout << "Four of a kind."<< endl;
    }
    else if (n_of_a_kind(tally, 3)) {
        if(n_of_a_kind(tally, 2)){
            cout << "Full House." << endl;
        }
        else{
        cout << "Three of a kind."<< endl;
        }}
    else if (n_of_a_kind(tally, 2)){
        if(num_pairs(tally)==2){
            cout << "Two Pair." << endl;
        }
        else{
        cout << "One pair." <<  endl;
        }}
    else if (n_of_a_kind(tally, 0)){
        cout << "Sorry! No Best Hand.";
    }
}

bool n_of_a_kind(vector<int> tally, int n)
{
    for(int i=0; i < tally.size();i++) {
        if(tally.at(i) == n) {
            return true;
        }
    }
    return false;
}
int num_pairs(vector<int> tally)
{
    int r=0;
    for(int i=0; i<tally.size(); i++){
        if(tally.at(i)/2 ==1){
            r++;
        }
    }
    return r;
    }
