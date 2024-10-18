// Write a Program to Calculate the Average of All the Elements Present in an Array.
#include<iostream>
using namespace std;

int main()
{
    int n , sum;
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
    
    for (int k = 0; k < n; k++)
    {
        sum += arr[k];
    }
    cout << "\nThe sum : " << sum ;
    double ave = sum / n;

    cout << "\nAverage : " << ave ;
    return 0;
}