// Write a pogrom to find compound interest
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double p, amount , rate , time;
    cout << "Enter the principal amount : ";
    cin >> p;
    cout << "Enter the interest rate : ";
    cin >> rate ;
    cout << "Enter the time (years) : ";
    cin >> time; 

    amount = p * pow((1 + (rate/100)) , time);
    double cp = amount - p;
    cout << "Compound interest : " << cp;
    return 0;
}