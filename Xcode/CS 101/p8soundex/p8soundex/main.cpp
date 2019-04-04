//
//  main.cpp
//  p8soundex
//
//  Created by Manan Thakkar on 12/5/16.
//  Copyright © 2016 Manan Thakkar. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    string name;
    int i;
    
    cout << "Enter name: " << endl;
    getline(cin, name);
    
    for(i=0;i<name.size();i++){
        name.at(i)=toupper(name.at(i));}
    
    for(i=1;i< name.size();i++){
        switch(name.at(i)){
            case'H':case'W':
                name.erase(i,1); i--;  break;
            case 'B': case 'F': case 'P': case 'V':
                name.at(i)= '1'; break;
            case'C':case'G':case'J':case'K':
            case'Q':case'S':case'X':case'Z':
                name.at(i)= '2'; break;
            case'D':case'T':
                name.at(i)= '3'; break;
            case'L':
                name.at(i)='4';break;
            case'M':case'N':
                name.at(i)= '5';break;
            case'R':
            name.at(i)='6';break;}}
    
    for(i=1;i+1<name.size();i++){
        if(name.at(i)== name.at(i+1)){
            name.erase(i,1);}}
    
    for(i=1;i< name.size();i++){
        switch(name.at(i)){
            case'A':case'E':case'I':case'O':case'U':case'Y':
                name.erase(i,1);
            i--; break;}}
    
    name.append("000");
    name.resize(4);
    cout << "Soundex: "<< name <<endl;
    return 0;
}
