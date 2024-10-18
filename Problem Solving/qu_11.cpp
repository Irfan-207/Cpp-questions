// Write a Program to Compute the Sum of Diagonals of a Matrix.
#include<iostream>
using namespace std;

int main()
{
    int row , column;
    cout << "Enter the row number : ";
    cin >> row ;
    cout << "Enter the column number : ";
    cin >> column ;
    int arr[row][column];
    cout << "Enter the elements : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Entered array : \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout <<" "<< arr[i][j];
        }
        cout << endl;
    }
    
    return 0;
}