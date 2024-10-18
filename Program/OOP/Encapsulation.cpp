// Demonstrate encapsulation
// Encapsulation refers to the bundling of data (variables) and the methods (functions) that operate on that data into  a single unit, typically a class.

#include<iostream>
#include<string>
using namespace std;

// Creating a class
class student
{
    // Access specifier
    public:
        // Attributes / Properties
        string name;
        int roll;
    // Creating a constructor
    student(string name , int roll){
        this -> name = name;
        this -> roll = roll;
    }
    // Creating a method to introduce the student
    void info(){
        cout << "Hi , I'm a student . \nMy name is " << name << "\nI'm roll n.o " << roll << "\nThank you!!";
    }
};
int main()
{
    // creating an object and call the constructor
    student s1("Somit" , 1);
    // Calling the method
    s1.info(); 
    return 0;
}
