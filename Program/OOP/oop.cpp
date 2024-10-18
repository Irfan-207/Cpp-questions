#include<iostream>
#include<string>

using namespace std;

//Demonstrate Abstraction
class AbstractEmployee // Abstract class
{
    virtual void AskForPromotion () =0; //Virtual abstract method
};

class Employee : AbstractEmployee // creating a class called Employee
{
    //Demonstrate Encapsulation 
    private:
        string Company; // String attribute
        int Age; // Integer attribute
    protected:
        string Name; // String attribute
    public: //Access specifier

        //Demonstrate Encapsulation 
                //NAME
        void setname(string name) //setter method for name
        {
            Name = name;
        }
        string getname() // Getter method for name 
        {
            return Name;
        }
                //COMPANY
        void setcompany(string company) //setter method for company
        {
            Company = company;
        }
        string getcompany() // Getter method for name 
        {
            return Company;
        }
                //AGE
        void setage(int age) // Setter method for age
        {
            Age = age;
        }
        int getage() //Getter method for age
        {
            return Age;
        }
        // Encapsulation demonstrated

    void introduceYourself() //Method function declaration and definition
    {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
    }

   /* void introduceYourself(); //Method function declaration */

   /* Employee(string name , string company , int age); // Constructor declaration */
    Employee(string name , string company , int age) // Creating a constructor 
    {
        Name = name ;
        Company = company;
        Age = age ;
    }

    void AskForPromotion ()
    {
        if(Age > 30)
            cout <<Name << " got promoted!!!" << endl;
        else
            cout << Name << ", sorry , You are not promoted!!!" << endl;
    }

    //polymorphism
    virtual void work()
    {
        cout << Name << " is checking email . Doing tasks ......" << endl;
    }
};


//Inhabitance
class Developers :public Employee
{
    public:
        string FevProgrammingLanguage;
        Developers(string name , string company , int age, string favprogramminglang)
            :Employee(name,company,age)
        {
            FevProgrammingLanguage = favprogramminglang;
        }

        void FixBugs()
        {
            cout << Name << " fix bugs using " << FevProgrammingLanguage << endl;
        }

        //polymorphism
        void work()
        {
            cout << Name << " is writing cond in " << FevProgrammingLanguage << endl;
        }
};

class Teacher :public Employee
{
    public:
        string Subject;
        
        void PrepareLesson()
        {
            cout << Name << " is preparing " << Subject << " lesson" << endl;
        }
        Teacher(string name , string company , int age,string subject)
            :Employee(name,company , age)
        {
            Subject = subject;
        }

        //polymorphism
        void work()
        {
            cout << Name << " is teaching " << Subject << endl;
        }
};


/* //Method function declaration outside the class (use :: ) 
void Employee::introduceYourself()
{
    cout << "Name : " << Name << endl;
    cout << "Company : " << Company << endl;
    cout << "Age : " << Age << endl;
} */

/* //constructor declaration outside the class (use ::)
Employee :: Employee(string name , string company , int age)
{
    Name = name ;
    Company = company;
    Age = age ;
} */

int main()
{
    Employee employee1 = Employee("Niloy" , "Intel" , 28); //creating a object called employee1
    // employee1.name = "Niloy";
    // employee1.company = "Intel";
    // employee1.age = 28;
    employee1.introduceYourself(); // Call the method
    // output: 
            // Name : Niloy
            // Company : Intel
            // Age : 28
    cout << endl;

    Employee employee2 = Employee("Irfan" , "Microsoft" , 35);; // creating a object employee2
    // employee2.name = "Irfan";
    // employee2.company = "Microsoft";
    // employee2.age = 35;
    employee2.introduceYourself(); // Call the method 
    //output: 
            // Name : Irfan
            // Company : Microsoft
            // Age : 35 

    //Encapsulation
    employee1.setage(15);
    cout << employee1.getname() << " is " << employee1.getage() << " years old." << endl; //output: Niloy is 15 years old.
    employee2.setage(25);
    cout << employee2.getname() << " is " << employee2.getage() << " years old." << endl; // output: Irfan is 25 years old.

    //Abstraction
    employee1.AskForPromotion(); //output :Niloy, sorry , You are not promoted!!!
    employee2.AskForPromotion(); //output:Irfan, sorry , You are not promoted!!!

    //Inhabitance
    Developers d = Developers("Sadik","Microsoft",25, "C++");
    d.FixBugs(); //output: Sadik fix bugs using C++
    d.AskForPromotion(); //output: Sadik, sorry , You are not promoted!!!

    Teacher t = Teacher("Reashad" , "Bikiron" , 20 , "Math");
    t.PrepareLesson(); //output: Reashad is preparing Math lesson
    t.AskForPromotion(); //output: Reashad, sorry , You are not promoted!!!

    //polymorphism : The most common use of polymorphism is when a parent class reference is used to refer to a child class object
    d.work();
    Employee *e1 = &d;
    e1->work();

    t.work();
    Employee *e2 = &t;
    e2->work();

    return 0;
}

// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. 
// By default the access specifier is private if ypu do not define it .

