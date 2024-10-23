// C++ Function Programs
#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int num;
void menu(){
    cout << "\t\t\t\n1 . Display Prime Numbers Between Two Intervals Using Function" << endl;
    cout << "\t\t\t\n2 . Check Whether a Number Can be Express as Sum of Two Prime Numbers" << endl;
    cout << "\t\t\t\n3 . Find the Sum of Natural Numbers ." << endl;
    cout << "\t\t\t\n4 . Calculate the Factorial of a Number ." << endl;
    cout << "\t\t\t\n5 . Reverse a Sentence ." << endl;
}

// Function prototyping
void prime();
void check_sum();
void sum();
void Calculate_Factorial();
void Reverse_Text(string &str, int index, int n);
int main()
{
    menu();
    int choice ;
    cout << "\n\nEnter your choice : ";
    cin >> choice;

    switch (choice)
    {
        case 1 : 
        {
            prime();
            break;
        }
        case 2 : 
        {
            check_sum();
            break;
        }
        case 3 : 
        {
            sum(); 
            break;
        }
        case 4 : 
        {
            Calculate_Factorial();
            break;
        }
        case 5 : 
        {
            string text;
            cout << "Enter a string: ";
            getline(cin, text); // Using getline to read the entire line including spaces
            int n = text.length(); // Getting the length of the string

            cout << "Reversed text: ";
            Reverse_Text(text, 0, n);
            break;
        }
        default :
        {

            break;
        }
    }
    return 0;
}
// Function to print prime numbers 
void prime()
{
    int start , end;
    cout << "Enter the starting point : ";
    cin >> start;
    cout << "Enter thr finishing point : ";
    cin >> end;

            cout << "Prime number between " << start << " and " << end << " are : " ;
        for (int i = start; i <= end; i++)
        {
            bool result = true; // Reset result for each number
                if (i <= 1)
                {
                    result = false;
                }
                else {
                    for (int j = 2; j <= i / 2; j++) {
                        if (i % j == 0) {
                            result = false;
                            break;
                        }
                    }
                }
                if (result) {
                    cout << i << " ";
                }
        }
}
// Function to Check Whether a Number Can be Express as Sum of Two Prime Numbers
void check_sum()
{
    cout << "Enter your number : ";
    cin >> num;

        int N = num - 2;
                bool result = true;
                    if (N <= 1)
                    {
                        result = false;
                    }
                    else {
                        for (int j = 2; j <= N / 2; j++) {
                            if (N % j == 0) {
                                result = false;
                                break;
                            }
                        }
                    }
            if (result) {
                cout << "Yes ! The number " << num << " Can Be Expressed as Sum of Two Prime Numbers.";
            }
            else{
                cout << "No ! The number " << num << " Can't Be Expressed as Sum of Two Prime Numbers.";
            }
}
// Function to Find the Sum of Natural Numbers
void sum()
{
    cout << "Enter the n'th number : ";
    cin >> num;
    int result = 0;
            for (int i = num; i >= 1; i--) {
                result += i;
            }
            cout << "The sum : " << result;
}
// Function to Calculate the Factorial of a number
void Calculate_Factorial()
{
    cout << "Enter a positive number : ";
    cin >> num ;
        if (num < 0) {
            cout << "Sorry ! You entered an invalid number .";
        }
        else {
            int factorial = 1;
            for (int i = 1; i <= num; i++) {
                factorial *= i;
            }
            cout << "Calculated result : " << factorial;
        }
}
// Function to Reverse a sentence
void Reverse_Text(string &str, int index, int n) 
{
    // Return if we reached the last index or the end of the string
    if (index == n) {
        return;
    }
    // Storing each character starting from index 0 in function call stack
    char temp = str[index];
    // Calling recursive function by increasing index every time
    Reverse_Text(str, index + 1, n);
    // Printing each stored character while recurring back
    cout << temp;
}
