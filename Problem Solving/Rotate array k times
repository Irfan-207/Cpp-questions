// Print array after it is right rotated K times
#include <iostream>
using namespace std;
void rightRotate(int arr[], int n , int k)
{
    // if rotation is greater then the size of the array
    k = k % n;
    cout << "Array after " <<k<< " rotation : ";
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            // Printing rightmost kth elements
            cout << arr[n + i - k] << " ";
        }
        else {
            // Prints array after 'k' elements
            cout << arr[i - k] << " ";
        }
    }
}
int main()
{
    int n , k;
    cout << "How many element you want to enter : ";
    cin >> n;
    int arr[n];
    // Get the array from the user
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Print the array
    cout << "Entered array : ";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    
    cout <<"\nHow many times do you want to rotate the array : ";
    cin >> k;
    // call the function
    rightRotate(arr , n , k);
    return 0;
}
