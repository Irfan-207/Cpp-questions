// Write a program to find out is the year leap year or not
#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the year : ";
    int year ;
    cin >> year ;
    if (year % 400 == 0)
    {
        cout << year << " is a leap year!!!";
    }
    else  if (year % 100 == 0)
    {
        cout << year << " is not a leap year !!";
    }
    else if (year % 4==0)
    {
        cout << year <<" is a leap year!!!";
    }
    else {
        cout << year <<" is not a leap year !!";
    }
    return 0;
}