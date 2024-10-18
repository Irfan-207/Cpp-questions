// C++ Pointers Programs
#include<iostream>
using namespace std;
void menu(){
    cout << "\n1. Pointers \n";
    cout << "\n2. Array of Pointers \n";
    cout << "\n3. void Pointer \n";
    cout << "\n4. Reference To a Pointer \n";
    cout << "\n5. Function Pointer \n";
    cout << "\n6. Opaque Pointer \n"; 
}
// Function prototyping
// Function Demonstrate pointer
// Pass by value
int square1(int ver1) {
  
    cout << "Address of ver1 in square1() function: " << &ver1 << endl;
    // clone modified inside the function
    ver1 *= ver1;
    return ver1;
}
// Pass-by-Reference with Pointer Arguments
void square2(int *ver2) {
    
    cout << "Address of ver2 in square2() function: " << ver2 << endl;
    // Explicit de-referencing to get the value pointed-to
    *ver2 *= *ver2;
}
// Pass-by-Reference with Reference Arguments
void square3(int &ver3) {
    
    cout << "Address of ver3 in square3() function: " << &ver3 << endl;
    // Implicit de-referencing (without '*')
    ver3 *= ver3;
}
void pointer();
void array_pointer();
void v_pointer();
void R_pointer();
// Functions to demonstrate function pointer
int multiply(int a , int b) {
    return a*b;
}
void print(int (*funcptr)(int , int)){
    int a, b;
    cout << "\nEnter the value of a and b: ";
    cin >> a >> b;
    cout << "\nThe product is: " << funcptr(a, b) << endl;
}
void f_pointer();

int main()
{
    menu();
    int choice ;
    cout << "\nEnter your choice : ";
    cin >> choice;
        switch (choice)
        {
            case 1 : {
                pointer();
                break;
            }
            case 2 : {
                array_pointer();
                break;
            }
            case 3 : {
                v_pointer();
                break;
            }
            case 4 : {
                R_pointer();
                break;
            }
            case 5 : {
                f_pointer();
                break;
            }
            default : {
                cout << "Sorry ! You have entered an invalid choice .";
                break;
            }
        }
    return 0;
}
// Function to demonstrate pointer
void pointer()
{
    // Demonstrate pointer
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int *p = &n;

        cout << "\nThe Address of n: " << &n;
            cout << "\nThe Address of n by pointer: " << p;
                cout << "\nThe value of n: " << n;
                     cout << "\nThe value of n by pointer: " << *p;

    // Call-by-Value
    int ver1;
    cout << "\n\nEnter the value of ver1: ";
    cin >> ver1;
        
        cout << "Square of ver1: " << square1(ver1) << "\n";
            cout << "Address of ver1 in main(): " << &ver1 << endl;
                cout << "Address of ver1 in square1() is not the same as ver1 in main()\n";
                    cout << "No change in ver1: " << ver1 << "\n";

    // Call by Reference with Pointer Arguments
    int ver2;
    cout << "\nEnter the value of ver2: ";
    cin >> ver2;
    square2(&ver2);
        
        cout << "Square of ver2: " << ver2 << endl;
            cout << "Address of ver2 in main(): " << &ver2 << endl;
                cout << "Address of ver2 in square2() is the same as ver2 in main()\n";
                    cout << "Change reflected in ver2: " << ver2 << endl;

    // Call-by-Reference with Reference Arguments
    int ver3;
    cout << "\nEnter the value of ver3: ";
    cin >> ver3;
    square3(ver3);
    
        cout << "Square of ver3: " << ver3 << endl;
            cout << "Address of ver3 in main(): " << &ver3 << endl;
                cout << "Address of ver3 in square3() is the same as ver3 in main()\n";
                    cout << "Change reflected in ver3: " << ver3 << "\n";
}
// Function to print an array of pointer
void array_pointer()
{
    int s;
    cout << "Enter the size of the array : ";
    cin >> s;
    // Dynamicly creating an array of size s
    int *p = new int[s];
    
    cout << "Enter " << s << " element : ";
        for (int i = 0; i < s; i++) {
            cin >> p[i];
        }
    // Print the values using pointers
    cout << "\nEntered array : " ;
    for (int i = 0; i < s; i++) {
        cout << p[i] << " " ;
    }
    for (int i = 0; i < s; i++) {
        cout << "\nAddress of p[ " << i << " ] = " << &p[i] << endl; 
    }
    
    // Clean up dynamically allocated memory
    delete[] p;
}
// Function to demonstrate void pointer
void v_pointer()
{
    cout << "\t\t\t\t\nvoid pointers cannot be dereferenced.\n";
    cout << "\nEnter the value of a : ";
    int a;
    cin >> a;
    // Create a void pointer
        void *p = &a;
    // The void pointer 'p' is cast to an integer pointer using '(int*)p' Then, the value is dereferenced with `*(int*)p` to get the value at that memory location
        cout << "\nValue of a : " << *(int*)p;
} 
// Function to demonstrate Reference To a Pointer
void R_pointer()
{
    int x;
    cout << "\nEnter the value of x : ";
    cin >> x;
    cout << "\nOriginal value of x = " << x << endl;
    // ref is a reference to x.
    int &ref = x;

    // value of x is now changed to 30
    ref = 30;
    cout << "Changed value of x = " << ref << endl;

    // value of x is now changed to 40
    x = 40;
    cout << "Changed value of x = " << x << endl;
}
// Function to demonstrate function pointer
void f_pointer()
{
    cout << "\nHere we Point a pointer to a function and call it using that pointer.\n";
    int a , b;
    cout << "\nEnter the value of a and b : ";
    cin >> a >> b;

        // Declaring function pointer
        int (*func)(int , int);

        // func is pointing to the multiplyTwoValues function
        func = multiply;
        int prod = func (a , b);
        cout << "\nThe value of product : " << prod << endl;


    cout << "Here we are Passing a function pointer as a parameter\n";
    print(multiply);

}