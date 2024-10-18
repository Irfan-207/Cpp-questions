//Write a Program to Find Compound Interest.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double p , A , T , ci , r;
    /* P is the principal amount of money
    A is the amount of money accumulated after (N) years, including interest.
    N is the number of times that interest is compounded per year.
    T is the time the money is invested or borrowed for, in years. 
    r is the annual interest rate */

    cout << "Enter the principal amount : ";
    cin >> p;
    cout << "Enter the annual interest rate : ";
    cin >> r;
    cout << "Enter the time (years) : ";
    cin >> T;

    A = p * ((pow((1 + r /100),T)));
    ci = A - p;
    /* A = principal*((pow((1 + rate / 100),time)));
    CI = A - principal; */

    cout << "The compound interest : " << ci ;
    return 0;
}