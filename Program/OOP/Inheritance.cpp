// Demonstrate inheritance
// Inheritance allows a class (called the derived class) to inherit properties and behaviors (methods) from another class (called the base class). 
#include<iostream>
#include<string>
using namespace std;
// Creating a class
class person
{
    public:
        string name;
        int age;
    person(string name , int age){
        this -> name = name;
        this -> age = age;
    }
    void info()
    {
        cout << "Name : " << name << "\nAge : " << age << endl;
    }
};
// Creating another class which will inherit the attributes of previous class
class student : public person 
// now the student class will inherit the attributes of the person class 
{
    public:
        int standard;
        int roll;
        string fav_sub;
    student(string name , int age , int standard , int roll , string fav_sub) : person(name , age)
    {
        this->standard = standard;
        this->roll = roll;
        this->fav_sub = fav_sub;
    }
    void studentInfo() {
        info(); // Calling the base class method
        cout << "Standard: " << standard << "\nRoll: " << roll << "\nFavorite Subject: " << fav_sub << endl;
    }
};
int main()
{
    person p1("Azim" , 21);
    p1.info();
    cout << endl;
    student s1("Niloy" , 21 , 13 , 1313 , "OOP");
    s1.studentInfo();

    // Final output
    /* 
        Name : Azim
        Age : 21

        Name : Niloy
        Age : 21
        Standard: 13
        Roll: 1313
        Favorite Subject: OOP
     */
    return 0;
}