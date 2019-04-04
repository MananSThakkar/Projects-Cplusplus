#include <algorithm>
#include<vector>
#include <iostream>
#include <iomanip>
using namespace std;

struct employee
{
    int id;
    string firstName;
    string lastName;
    int salary;
};

ostream& operator<< (ostream& out, employee e)
{
//    out << e.id << ' ' << e.lastName << setw(20-e.lastName.size())
//    << ' ' << e.firstName << ' ' << setw(20-e.firstName.size())  << "$" <<  e.salary;
    
    out << e.id << ' ' << left << setw(20) << e.firstName
        << ' ' << left << setw(20) << e.lastName
    << " $" << right << setw(7) << e.salary;
    return out;
}

bool byfirstName(employee e1, employee e2)
{
    return e1.firstName < e2.firstName;
}
bool byLastName(employee e1, employee e2)
{
    return e1.lastName < e2.lastName;
}
bool bysalary(employee e1, employee e2)
{
    return e1.salary > e2.salary;
}
bool byid(employee e1, employee e2)
{
    return e1.id < e2.id;
}
int main()
{
    vector<employee> team;
    team.push_back({ 29837, "Frank", "Barton", 43560});
    team.push_back({ 29880, "Tom", "Moorhead", 102087});
    team.push_back({ 29901, "Justin", "Wood", 83450});
    team.push_back({ 29811, "Jose", "Lee", 97520});
    team.push_back({ 29838, "Anne", "Green", 88000});
    
    //Sorted by Last Name
    sort(team.begin(), team.end(), byLastName);
    cout<<"SORTED BY LAST NAME:" <<endl;
    for(int i=0; i<5; i++)
    {
        cout<<team.at(i)<<endl;
    }
    cout<<endl;
    
    //Sorted by First Name
    sort(team.begin(), team.end(), byfirstName);
    cout<<"SORTED BY FIRST NAME:" <<endl;
    for(int i=0; i<5; i++)
    {
        cout<<team.at(i)<<endl;
    }
    cout<<endl;
    
    //Sorted by Last Name
    sort(team.begin(), team.end(), bysalary);
    cout<<"SORTED BY SALARY:" <<endl;
    for(int i=0; i<5; i++)
    {
        cout<<team.at(i)<<endl;
    }
    cout<<endl;
    
    //SORTED by ID number
    sort(team.begin(), team.end(), byid);
    cout<<"SORTED BY ID NUMBER:" <<endl;
    for(int i=0; i<5; i++)
    {
        cout<<team.at(i)<<endl;
    }
    return 0;
}







