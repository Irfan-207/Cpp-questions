// C++ Program to Show Inheritance
#include<iostream>
#include<string>
using namespace std;
// Creating a teacher class
class teacher {
    private: 
        int salary;
    public :
        string name ;
        int id ;
        int age ;
        string dept;

    teacher(string name , int id , int age , string dept) {
        this -> name = name ;
        this -> id = id;
        this -> age = age ;
        this -> dept = dept;
    }
    void introduction() {
                cout << "\nHi. Nice to meet you . I am a teacher . My name is " << name << " . I'm " << age << " years old. " << " I'm from " << dept << " department. My id is " << id << endl;
    }
    // Setter and getter methods
    void setSalary(int salary) {
        this -> salary = salary;
    }
    int getSalary() {
        return salary;
    }
};

// Creating a student class
class student : public teacher {
    public : 
        int roll ;
        int standard;
    
    student (string name , int id , int age , string dept , int standard , int roll) : teacher(name, id, age, dept) {
        this -> standard = standard;
        this -> roll = roll;
    }

    void studentIntro() {

        cout << "\nHi. Nice to meet you . I am a student . My name is " << name << " . I'm " << age << " years old. " << "I read in class " << standard << " .I'm from " << dept << " department. My id is " << id << " .My roll number is " << roll << " ."<< endl;
    }
};
int main()
{
    string name , dept;
    int id , age , salary , roll , standard;
    cout << "\nEnter your name : " ;
    getline(cin , name);
    cout << "\nEnter your age : ";
    cin >> age ;
    cout << "\nEnter your id : ";
    cin >> id ;
    cin.ignore();
    cout << "\nEnter your department : " ;
    getline(cin , dept);
    
    int n;
    cout << "\nEnter 1 if you are a teacher otherwise enter 2 : ";
    cin >> n;
        
        // creating a teacher
        if (n == 1) {
            cout << "\nEnter your salary : ";
            cin >> salary;
        
            teacher t1(name , id , age , dept);
            t1.setSalary(salary);
            t1.introduction(); 
            cout << "My salary is " << t1.getSalary() << " LPA.\n";

        }
        // creating a student
        else {
            cout << "\nWhich standard do you read : ";
            cin >> standard;
            cout << "\nEnter your roll n.o : " ;
            cin >> roll;
            student s1(name , id , age , dept , standard , roll);
            s1.studentIntro();
        }
    return 0;
}