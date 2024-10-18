#include<iostream>
#include<vector>
#include<string>
using namespace std;

/* Write a Program to find the maximum and minimum of an Array.

void min_max(int arr[], int n, int *min, int *max)
{
    *min = INT_MAX;
    *max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}
 */

/* // write a program to convert the Fahrenheit value to Celsius

float convert(float &f)
{
    float celsius = (5.0 / 9.0) * (f - 32.0);
    return celsius;
} */

int main()
{
    /*Write a Program to find the maximum and minimum of an Array.

    int n;
    cout << "How many elements you want to insert : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    cout << "The given array : ";
    for (int i = 0; i < n; i++)
    {
        cout <<" "<< arr[i];
    }
    cout << endl;
    int min , max;
    min_max(arr , n, &min , &max);
    cout << "The minimum value : " << min << endl;
    cout << "The maximum value : " << max << endl; 
    */

   /*  //   create an array 
   int n;
   cout << "How many age you want to enter : ";
   cin >> n;
   int age[n];
   cout << "Enter the age : ";
   for (int i = 0; i < n; i++)
   {
    cin >> age[i];
   }

   cout << "Given data : ";
   for(int data:age)
   {
    cout << data << " ";
   }
    int length = sizeof(age)/sizeof(int); 
    //    get the sum and average age from the array 
   double ave ;
   int sum=0;
   for (int ages : age)
   {
    sum += ages;
   }
   cout << "Sum : "<< sum <<endl;
   ave = sum / length;
   cout << "Average : "<< ave; 
   
    //    get the lowest age from the array
   int low_age = age[0];
   for(int ages : age)
   {
    if (low_age > ages)
    {
        low_age = ages;
    }
   }
   cout << "Lowest age is : " << low_age; */
   
   /* write a program to create a ship hitting game 
   bool ships[4][4] =   {
                            { 0, 1, 1, 0 },
                            { 0, 0, 0, 0 },
                            { 0, 0, 1, 0 },
                            { 0, 0, 1, 0 }
                        };
    
    // Keep track of how many hits the player has and how many turns they have played in these variables
    int hit =0;
    int numberOfterns = 0;

    //Allow the player keep going until they hit all 4 ships
    while (hit < 4)
    {
        int row , column;
        cout << "Selecting coordinates .\n";

        //Ask the player for row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        //check if the ship exists
        if (ships[row][column])
        {
            // If the player hit a ship, remove it by setting the value to zero.
            ships[row][column] =0;
            //increasing the hit count 
            hit ++ ;

            // Tell the player that they have hit a ship and how many ships are left
            cout << "Hit! " << (4-hit) << " left.\n\n";
        }
        else
        {
            //Tell the player that he missed the ship
            cout << "You have missed !!!";
        }
        //  Count how many turns the player has taken
        numberOfterns++;
    }
    
    cout << "Victory!\n";
    cout << "You won in " << numberOfterns << " turns"; */
    
   /* //clear the pointer concept

        string name = "Niloy"; 
    string *pname = &name ; //Declare the pname pointer variable using * symbol

    cout << "The address of variable name is : "<< &name << endl ;
    cout << "The value of variable name is : " << name << endl;

    cout << "The address of variable name is : " << pname << endl; //If you print the value of pname variable it will give you the address of name variable 
    cout << "The value of variable name is : " << *pname << endl; // If ypu dereference the pname variable using * symbol it will give you the value of name variable


    // pname = address of name 
    // *pname = value of name
    
    //changing the value of name
    *pname = "Irfan";
    cout << "The new value of name is : "<< *pname ; 
    cout << "The new value of name is : " << name ; 
    */

   /* // write a program to convert the Fahrenheit value to Celsius
   float fah;
   cout << "Enter the temperature in fahrenheit : ";
   cin >> fah ;
   float celsius = convert(fah);

    cout << "Temperature in fahrenheit : " << fah << endl;
    cout << "Temperature in celsius : " << celsius << endl; */
   
    return 0;
}