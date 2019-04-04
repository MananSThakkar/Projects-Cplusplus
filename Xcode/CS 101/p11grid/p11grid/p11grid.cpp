//
//  main.cpp
//  p11
//
//  Created by Manan Thakkar on 12/12/16.
//  Copyright © 2016 Manan Thakkar. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


const int M = 5;
const int N = 5;
int currentI = 0;
int currentJ = 0;
char firstChar = 'A';
bool can_go_left(int i, int j);
bool can_go_right(int i, int j);
bool can_go_up(int i, int j);
bool can_go_down(int i, int j);
bool stuck(int i, int j);
void print_grid(char grid[M][N]);
char grid[M][N];

int main(){
    srand(time(NULL));
    for(int i = 0; i < M ; i++) {
        for(int j = 0; j < N; j++) {
            grid[i][j] = '.';
        }
    }
    while(firstChar <= 'Z' && !stuck(currentI, currentJ))
    {
        grid[currentI][currentJ] = firstChar;
        switch(rand()%4) {
            case 0: // Right
                if (currentJ < N-1 && grid[currentI][currentJ+1]=='.' ) {
                    currentJ++;
                    firstChar++;
                }
                break;
            case 1: // Down
                if (currentI <M-1 && grid[currentI+1][currentJ]=='.' ) {
                    currentI++;
                    firstChar++;
                }
                break;
            case 2:
                if (currentJ>0 && grid[currentI][currentJ-1]=='.' ) {
                    currentJ--;
                    firstChar++;
                }
                break;
            case 3:
                if (currentI>0 && grid[currentI-1][currentJ]=='.' ) {
                    currentI--;
                    firstChar++;
                }
                break;
            default: break;
        }
        grid[currentI][currentJ] = firstChar;
    }
    print_grid(grid);
}
void print_grid(char grid[M][N]){
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cout << grid[i][j];
            
        }
        cout << endl;
        
    }}
bool can_go_left(int i, int j){
    if (j>0 && grid[i][j-1] == '.') {
        return true;
    }
    else{
        return false;
    }
}
bool can_go_right(int i, int j){
    if (j<N && grid[i][j+1] == '.') {
        return true;
    }
    else{
        return false;
    }
}


bool can_go_up(int i, int j){
    if (i>0 && grid[i-1][j] == '.') {
        return true;
    }
    else{
        return false;
    }
}


bool can_go_down(int i, int j){
    if (i<M && grid[i+1][j] == '.') {
        return true;
    }
    else{
        return false;
    }
}

bool stuck(int i, int j){
    if ((currentJ < N-1 && grid[currentI][currentJ+1]=='.') == false &&
        (currentI <M-1 && grid[currentI+1][currentJ]=='.')==false &&
        (currentJ>0 && grid[currentI][currentJ-1]=='.' ) == false &&
        (currentI>0 && grid[currentI-1][currentJ]=='.' )==false)
    {
        return true;
    }
    else{
        return false;
    }
    
}
