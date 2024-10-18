// C++ Program to check if two Arrays are Equal or not
#include<iostream>
#include<algorithm>
using namespace std;

// Function to check if both arrays are equal
bool checkArray(int arr1[], int arr2[],int s1 ,int s2)
{
    // If lengths of array are not equal means array are not equal
    if (s1 != s2)
    {
        return false;
    }
    // Sort both arrays
    sort(arr1 , arr1 + s1);
    sort(arr2 , arr2 + s2);

    // Linearly compare elements
    for (int i = 0; i <= s1; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int s1, s2;
    cout << "Enter the element number of the first number: ";
    cin >> s1;

    int array1[s1];
    cout << "Enter the elements of the first number: ";
    for (int i = 0; i < s1; i++)
    {
        cin >> array1[i];
    }
    cout << "Entered array: ";
    for (int i = 0; i < s1; i++)
    {
        cout << array1[i] << " ";
    }
    cout << "\nEnter the element number of the second number: ";
    cin >> s2;
    int array2[s2];
    cout << "Enter the elements of the second number: ";
    for (int i = 0; i < s2; i++)
    {
        cin >> array2[i];
    }
    cout << "\nEntered array: ";
    for (int i = 0; i < s1; i++)
    {
        cout << array1[i] << " ";
    }
    

    if (checkArray(array1 , array2 , s1 , s2))
    {
        cout << "\nThe arrays are equal!!!";
    }
    else 
    {
        cout << "\nThe arrays are not equal!!!!";
    }
    return 0;
}