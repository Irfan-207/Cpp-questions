// Write a Program to Find the Maximum and Minimum in an Array.
#include<iostream>
#include<algorithm>
using namespace std;
int getMin(int arr[] , int n)
{
    return *min_element(arr , arr+n);
}
int getMax(int arr[] , int n)
{
    return *max_element(arr , arr+n);
}
int main()
{
    int n;
    cout << "How many element you want to enter: ";
    cin >> n;

    int arr[n];
    cout <<"Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered element : ";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    cout << "\nMinimum element of array: " << getMin(arr, n) << " ";  
    cout << "\nMaximum element of array: " << getMax(arr, n); 
    return 0;
}