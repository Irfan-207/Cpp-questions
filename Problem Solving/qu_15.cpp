// C++ Array Programs
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void menu (){
    cout << "\n1.  Check if Two Arrays Are Equal or Not" << endl;
    cout << "\n2.  Find the Maximum and Minimum in an Array" << endl;
    cout << "\n3.  Merge Two Arrays" << endl;
    cout << "\n4.  Calculate the Average of all the Elements Present in an Array" << endl;
    cout << "\n5.  Print a 2D Array" << endl;
    cout << "\n6.  Find Common Array Elements" << endl;
    cout << "\n7.  Remove Duplicate Elements From an Array" << endl;
    cout << "\n8.  Remove All Occurrences of an Element in an Array" << endl;
    cout << "\n9.  Array Rotation" << endl;
    cout << "\n10. Copy All the Elements of One Array to Another in the Reverse Order" << endl;
}
// Function Prototyping
void check_Equal();
void max_min();
void marge();
void ave();
void print();
void find_common();
void Remove_Duplicate();
void remove_Occurrences();
void Rotation();
void copy();
int main()
{
    menu();
    int choice ;
    cout << "\nEnter your choice : ";
    cin >> choice;

        switch (choice)
        {
            case 1 :
            {
                check_Equal();
                break;
            }
            case 2 :
            {
                max_min(); 
                break;
            }
            case 3 :
            {
                marge();   
                break;
            }
            case 4 :
            {
                ave();
                break;
            }
            case 5 :
            {
                print();
                break;
            }
            case 6 :
            {
                find_common();
                break;
            }
            case 7 :
            {
                Remove_Duplicate();
                break;
            }
            case 8 :
            {
                remove_Occurrences();
                break;
            }
            case 9 :
            {
                Rotation();
                break;
            }
            case 10 :
            {
                copy();    
                break;
            }
            default:
            {
                cout << "Sorry ! Invalid choice .";
                break;
            }
        }
    return 0;
}
// Function to check is two array is equal
void check_Equal()
{
    int s1 , s2;
    // First array
    cout << "How many element number of the first array : ";
    cin >> s1;
     int arr1[s1];
      cout << "\nEnter the elements : ";
        for(int i = 0 ; i < s1 ; i++) {
            cin >> arr1[i];
        }
    // Second array
    cout << "\nHow many element number of the second array : ";
    cin >> s2;
     int arr2[s2];
      cout << "\nEnter the elements : ";
    
        for(int i = 0 ; i < s2 ; i++) {
            cin >> arr2[i];
        }
    // Print the two array
        cout << "\nThe first array : ";
        for(int i = 0 ; i < s1 ; i++) {
            cout << arr1[i] << " ";
        }
        cout << "\nThe second array : ";
        for(int i = 0 ; i < s2 ; i++) {
            cout << arr2[i] << " ";
        }

    // check if they equal
        bool equal = true;
        if (s1 != s2) {
            cout << "\nThe array are not equal.";
        }
        else{
            // Sort both arrays
            sort(arr1, arr1 + s1);
            sort(arr2, arr2 + s2);

                for (int i = 0; i <= s1 - 1; i++) {
                    if (arr1[i] != arr2[i]) {
                        equal = false;
                    }
                }
                    if (equal) {
                        cout << "\nThe arrays are equal !!";
                    }
                    else {
                        cout << "\nThe arrays are not equal!!";
                    }
        }
}
// Function to find maximum and minimum of an array
void max_min()
{
        int s1 ;
    // First array
    cout << "How many element number of the first array : ";
    cin >> s1;
     int arr1[s1];
      cout << "\nEnter the elements : ";
        for(int i = 0 ; i < s1 ; i++) {
            cin >> arr1[i];
        }
    // Print the two array
        cout << "\nThe entered array : ";
        for(int i = 0 ; i < s1 ; i++) {
            cout << arr1[i] << " ";
        }

    // Find the maximum and minimum
       int max = *max_element(arr1 , arr1 + s1);
       int min = *min_element(arr1 , arr1+s1);
    // Print the answers
    cout << "\nThe maximum element is: " << max;
    cout << "\nThe minimum element is: " << min;
}
// Function to marge two array
void marge()
{
    int s1 , s2;
    // First array
    cout << "How many element number of the first array : ";
    cin >> s1;
     int arr1[s1];
      cout << "\nEnter the elements : ";
        for(int i = 0 ; i < s1 ; i++) {
            cin >> arr1[i];
        }
    // Second array
    cout << "\nHow many element number of the second array : ";
    cin >> s2;
     int arr2[s2];
      cout << "\nEnter the elements : ";
    
        for(int i = 0 ; i < s1 ; i++) {
            cin >> arr2[i];
        }
    // Print the two array
        cout << "\nThe first array : ";
        for(int i = 0 ; i < s1 ; i++) {
            cout << arr1[i] << " ";
        }
        cout << "\nThe second array : ";
        for(int i = 0 ; i < s2 ; i++) {
            cout << arr2[i] << " ";
        }
    // Print the marge array
        int arr3[s1 + s2];
        int i = 0 , j = 0 , k = 0;
        // traverse the arr1 and insert its element in arr3 
        while (i < s1) {
            arr3[k++] = arr1[i++];
        }
        // traverse the arr2 and insert its element in arr3 
        while (j < s2) {
            arr3[k++] = arr2[j++];
        }
    // Sort th arr3
        sort (arr3 , arr3+s1+s2);
    // print arr3
        cout << "\nMarge array : " ;
            for(int i = 0 ; i < s1 + s2 ; i++ ) {
                cout << arr3[i] << " " ;
            }
}
// Function to calculate the average
void ave()
{
    int s1;
    cout << "How many element you want to enter : ";
    cin >> s1;
    int arr[s1];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < s1; i++) {
                cin >> arr[i];
            }
        cout << "\nArray : " ;
        for (int i = 0; i < s1; i++) {
            cout << arr[i] << " ";
        }

        int sum = 0;
            for (int i = 0; i < s1; i++) {
                sum += arr[i];
            }
        double average = sum / s1;
        cout << "\nAverage : " << average;
}
// Function to print 2d array
void print()
{
    int row , column; 
    cout << "Enter the row number : ";
    cin >> row;
    cout << "Enter the column number : ";
    cin >> column;
    int arr[row][column];
        cout << "Enter the elements : ";
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < column; j++) {
                    cin >> arr[i][j];
                }
            }
        cout << "\nThe array : " << endl;
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < column; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
}
// Function to find the common element in a array
void find_common()
{
    int s1 , s2;
    // First array
    cout << "How many element number of the first array : ";
    cin >> s1;
     int arr1[s1];
      cout << "\nEnter the elements : ";
        for(int i = 0 ; i < s1 ; i++) {
            cin >> arr1[i];
        }
    // Second array
    cout << "\nHow many element number of the second array : ";
    cin >> s2;
     int arr2[s2];
      cout << "\nEnter the elements : ";
        for(int i = 0 ; i < s1 ; i++) {
            cin >> arr2[i];
        }
    // Print the two array
        cout << "\nThe first array : ";
            for(int i = 0 ; i < s1 ; i++) {
                cout << arr1[i] << " ";
            }
        cout << "\nThe second array : ";
            for(int i = 0 ; i < s2 ; i++) {
                cout << arr2[i] << " ";
            }
    
    // Find common number 
    cout << "\nThe common elements : ";
        for (int i = 0; i < s1; i++) {
            for (int j = 0; j < s2; j++) {
                if (arr1[i] == arr2[j]) {
                    cout << arr1[i] << " ";
                }
            }   
        }
}
// Function to remove duplicates from an array
void Remove_Duplicate()
{
    int s;
    cout << "How many elements you want to enter : ";
    cin >> s;
    int arr[s];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < s; i++) {
                cin >> arr[i];
            }
        // Sorting array
        sort(arr , arr+s);
        cout << "\nEntered array : ";
            for (int i = 0; i < s; i++) {
                cout << arr[i] <<" ";
            }
        int temp[s];
        int j = 0;
            for (int i = 0; i < s-1; i++) {
                if (arr[i] != arr[i+1]) {
                    temp[j++] = arr[i];
                }
            }
    // Store the last element as whether it is unique or repeated, it hasn't stored previously
    temp [j++] = arr[s - 1];
    // Modify original array 
        for (int i = 0; i < j; i++) {
            arr[i] = temp[i];
        }
    // Final output
    cout <<"\nThe ultimate array : ";
    for (int i = 0; i < j; i++){
        cout << arr[i] << " ";
    }
    
}
// Function to remove all Occurrences from the array
void remove_Occurrences()
{
    int s;
    cout << "How many elements you want to enter : ";
    cin >> s;
    int arr[s];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < s; i++) {
                cin >> arr[i];
            }
        cout << "\nEntered array : ";
            for (int i = 0; i < s; i++) {
                cout << arr[i] <<" ";
            }
    
    cout << "\nEnter your target element : ";
    int target;
    cin >> target;
        
        // Remove all occurrences of 3
        int* new_end = remove(arr , arr + s , target);
        int new_size = new_end - arr;

    // Print the modified array
    cout << "\nArray after removal: ";
    for (int i = 0; i < new_size; i++) {
        cout << arr[i] << " ";
    }
}
// Function to rotate an array
void Rotation()
{
        int s;
    cout << "How many elements you want to enter : ";
    cin >> s;
    int arr[s];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < s; i++) {
                cin >> arr[i];
            }
        // Sorting array
        sort(arr , arr+s);
        cout << "\nEntered array : ";
            for (int i = 0; i < s; i++) {
                cout << arr[i] <<" ";
            }

        // Rotate an array
        cout << "\nHow many time you want tyo rotate the array : ";
        int rotate , k = 0;
        cin >> rotate;
        int temp[s];
        for (int i = rotate; i < s; i++) {
            temp[k] = arr[i];
            k++;
        }
        // Storing the first d elements of array arr[] into temp
        for (int i = 0; i < rotate; i++) {
            temp[k] = arr[i];
            k++;
        }
        // Copying the elements of temp[] in arr[] to get the final rotated array
        cout << "\nRotated array : ";
            for (int i = 0; i < s; i++) {
                arr[i] = temp[i];
                cout << arr[i] <<" ";
            }
}
// Function to Copy All the Elements of One Array to Another in the Reverse Order
void copy()
{
    int s;
    cout << "How many elements you want to enter : ";
    cin >> s;
    int arr[s];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < s; i++) {
                cin >> arr[i];
            }
        // Sorting array
        sort(arr , arr+s);
        cout << "\nEntered array : ";
            for (int i = 0; i < s; i++) {
                cout << arr[i] <<" ";
            }
        // Array to store reverse array
        int arr1[s];
        int k = 0;
        cout << "\nCopied array : ";
            for (int i = s-1; i >= 0; i--) {
                arr1[k++] = arr[i];
            }
                for (int i = 0; i < s; i++) {
                    cout << arr1[i] << " ";
                }      
}