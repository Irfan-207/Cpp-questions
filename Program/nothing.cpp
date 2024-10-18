//Write a program to check the number is Palindrome

#include<iostream>
#include<string.h>
using namespace std;
int isPalindrome(string num)
{
    int len = num.length();

    for (int i = 0; i < len; i++)
    {
        if (num[i] != num[len - i -1])
        {
            return false;
        }
        return true;
    }
}
int main()
{
    cout << "Enter the number: ";
    string num;
    cin >> num;

    if (isPalindrome(num) == true)
    {
        cout << num << " is a Palindrome number !!!";
    }
    else
    {
        cout << num << " is not a Palindrome number !!!";
    }
    return 0;
}