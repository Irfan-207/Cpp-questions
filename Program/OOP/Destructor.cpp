// Demonstrate Destructor
// Destructor is opposite of constructor . It will deallocate the memory address / free up the memory address
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
        double *cgpaPtr;
    // Creating a constructor
    student(string name , double cgpa){
        this -> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa ;
    }
    // Destructor
    ~student(){
        cout << "Hi ! I delete everything." << endl;
        delete cgpaPtr; // Deleting cgpaPtr pointer
    }
    // Creating a method to introduce the student
    void info(){
        cout << "Hi , I'm a student . \nMy name is " << name << "\nMy CGPA : " << *cgpaPtr << "\nThank you!!" << endl;
    }
};
int main()
{
    // creating an object and call the constructor
    student s1("Somit" , 3.8);
    s1.info();
    return 0;
}
