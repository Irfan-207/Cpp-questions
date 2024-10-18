// Demonstrate Polymorphism

#include<iostream>
#include<string>
using namespace std;
class student{
    public : 
    // Compile time Polymorphism (Function overloading) 
    // In this class the name of the two methods are same but the parameters are different 
    // The compiler will automatically call the setable method depending on the parameters
        void show(int x){
            cout << "Int : " << x << endl;
        }
        void show(char ch){
            cout << "Char : " << ch << endl;
        }
};

class parent{
    public:
    // Run time Polymorphism (Function overriden)
    // The parent and child class will have the same function
    // The compiler will automatically call a function according to the object user will create
        void getInfo(){
            cout << "Parent class.\n";
        }

    // Run time Polymorphism (Virtual Function)
    // virtual function will be redefined in child class
    // Create a virtual function
    virtual void hell0(){
        cout << "Hello from parent .\n";
    }
};
class child : public parent{
    public:
    void getInfo(){
        cout << "Child Class. \n"; // If we call thus function the parent class function will overriden
    }
    // virtual function will be redefined in child class
    void hello(){
        cout <<"Hello from child .\n";
    }
};
int main()
{
    // Compile time Polymorphism (Function overloading) 
    student s1;
    s1.show(12); // output : 12
    s1.show('&'); // Output : &

    // Run time Polymorphism (Function overriden)
    parent p1;
    p1.getInfo(); // Output : Parent class
    child c1; // Child class
    c1.getInfo();
    
    // Run time Polymorphism (Virtual Function)
    p1.hell0(); //Hello from parent 
    c1.hello();//Hello from child 
    return 0;
}