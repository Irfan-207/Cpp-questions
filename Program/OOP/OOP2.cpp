#include<iostream>
#include<string>
using namespace std;
class teacher
{
    private:
        int salary;
    public:
        // Properties / attributes
        string name ;
        string dept;
        string subject;
        int ex;

//Constructor 
    // Non-parameterized constructor
    teacher(){
        cout << "Introducing the teachers of my institute : \n";
    }
    //  Parameterized constructor
    teacher(string name , int ex , string dept , string subject , int salary){
        // sing this pointer
        this -> name = name;
        this -> ex = ex;
        this -> dept = dept;
        this -> subject = subject;
        this -> salary = salary;
    }
    // copy constructor
    teacher(teacher &orgobj){ //Pass by reference
        cout << "I am creating a custom copy constrictor";
        this -> name = orgobj.name;
        this -> ex = orgobj.ex;
        this -> dept = orgobj.dept;
        this -> subject = orgobj.subject;
        this -> salary = orgobj.salary;
    }
    // Access private attribute
    void setSalary(int s){ //setter method
        salary = s;
    }
    int getSalary(){ //getter method
        return salary;
    }

    // Method /Member function
    void ChangeDept(string newDept){
        dept = newDept;
    }
    void info(){
        cout << "Hi ! I am " << name << ". I am a professor. Here is my professional details : \n" << "Name : " << name << "\nExperience : " << ex << " years.\nDepartment : " << dept << "\nSubject : "<< subject << "\nSalary : " << getSalary() << endl; 
    }
};
int main()
{
    // First object
    teacher t1("John snow" , 3 , "Computer Science" , "Cyber security" ,2000000);
    /* t1.name = "John Snow";
    t1.dept = "Computer science";
    t1.subject = "Cyber security";
    t1.ex = 3;
    t1.setSalary(2000000); */
    t1.info();

    // Second object
    teacher t2("Allen Walker" , 5 , "Computer science" , "C++" , 3000000);
    /* t2.name = "Allen Walker";
    t2.dept = "Computer science";
    t2.subject = "C++";
    t2.ex = 5;
    t2.setSalary(3000000); */
    t2.info();
    t2.ChangeDept("Software Engineering");
    cout <<"Recently I changed my department . \nMy New Department : " << t2.dept;
    
    // Third object
    teacher t3(t1);
    t3.info(); // default copy constructor 
    return 0;
}