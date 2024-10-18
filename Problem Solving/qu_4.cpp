// Write a program to check palindrome number
#include<iostream>
using namespace std;
int isPalindrome(string num)
{
    int len = num.length();
    for (int i = 0; i < len / 2; i++)
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
    string num;
    cout << "Enter your number : ";
    cin >> num;

    if (isPalindrome(num))
    {
        cout << num << " is a palindrome number !!!";
    }
    else{
        cout << num << " is not a palindrome number!!";
    }
    return 0;
}