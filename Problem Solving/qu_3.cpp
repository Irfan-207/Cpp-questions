// Write a program to check prime number 
#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter the number : ";
    int num;
    cin >> num ;
    
    bool result = true ;
    if (num <= 1)
    {
        result = false;
    }
    else {
        for (int i = 2; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                result = false;
                break;
            }
        }
    }
    if (result)
    {
        cout << num <<" is a prime number !!!";
    }
    else {
        cout << num <<" is not a prime number !!";
    }
    return 0;
}