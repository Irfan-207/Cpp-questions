#include<iostream>
#include<string>

using namespace std;
//create a car class with some attribute
class car
{
    public:
        string name;
        string brand;
        int year;

        //creating a method inside the class
        void myCar()
        {
            cout << "Name : " << name << endl;
            cout << "Brand : " << brand << endl;
            cout << "Established : " << year << endl;
        }
        //declaring a method outside the class
        void the_car();

        //create a constructor inside the class
        car(string Name , string Brand , int Year)
        {
            Name = name;
            Brand = brand;
            Year = year;
        }

        //declaring a constructor outside the class
        // car(string Name , string Brand , int Year);
};

//declaring a method outside the class
void car::the_car()
{
    cout << "The car I brought wes " << name << " " << brand << endl;
}

//declaring a constructor outside the class
/* car::car(string Name , string Brand , int Year)
{
    Name = name;
    Brand = brand;
    Year = year;
} */

//inheritance
class Vehicle // Base class
{
  public:
    string brand = "Mt-15";
    void honk() {
      cout << "My bike horn sounds like : Tuut, tuut! \n" ;
    }
};
class bike :public Vehicle // Derived class (bike)
{
    public :
        string sound;
};
//access the protected attribute in inheritance
class access // Base class (access)
{
    protected: //Protected access specifier
        int SALARY; //protected attribute SALARY
};
class programmer :public access //Derived class (programmer)
{
    public : 
        int bonus;
    void setSALARY(int S) //setter function
    {
        SALARY = S;
    }
    int getSALARY() //getter function
    {
        return SALARY;
    }
};

// Encapsulation 
class Employee
{
    private:
        int salary; //private attribute
    public:
        void setSalary(int s) // Setter function
        {
            salary = s; //excess the private attribute using setter function
        }
        int getSalary() //getter function
        {
            return salary;
        }
};

//Polymorphism
class Animal // Base class
{
    public:
        void AnimalSound()
        {
            cout << "Animals make a sound !!!" << endl;
        }
};
class Cat : public Animal //Derived class (Cat)
{
    public:
        void AnimalSound()
        {
            cout << "Cats sound like : meow meow !!!" << endl;
        }
};
class Dog : public Animal //Derived class (Dog)
{
    public: 
        void AnimalSound()
        {
            cout << "Dogs sound like : doo woo !!!" << endl;
        }
};

int main()
{
    // create an object 

    /* car obj1;
    obj1.name = "BMW";
    obj1.brand = "X5";
    obj1.year = 1995; */
    //When you create a constructor instead of writing above code you can write
    car obj1("BMW" , "X5" , 1995); 

    //create another object
    /* car obj2;
    obj2.name = "Ford";
    obj2.brand = "Mustang";
    obj2.year = 1969;
 */

    //When you create a constructor instead of writing above code you can write
    car obj2("Ford" , "MUstang" , 1996);

    cout << "I brought a car called " << obj1.name << " the brand is " << obj1.brand << " it was created in " << obj1.year << endl;
    obj1.myCar();
    obj1.the_car();

    cout << "I brought another car called " << obj2.name << " the brand is " << obj2.brand << " it was created in " << obj2.year << endl;
    obj2.myCar();
    obj2.the_car();

// Encapsulation 
    //Eceses private attribute
    Employee employee ;
    employee.setSalary(50000);
    cout << "Your salary : " << employee.getSalary() << endl; 

//Inheritance
    bike myBike ;
    myBike.honk();
    cout << "MY bike model is : " << myBike.brand << endl;

    //access protected attribute in inheritance
    programmer p;
    p.setSALARY(2000000);
    p.bonus = 100000;
    cout << "Protected attribute salary : " << p.getSALARY() << endl;
    cout << "Bonus : " << p.bonus << endl;


//Polymorphism
    Animal animal ;
    animal.AnimalSound();
    Cat cat;
    cat.AnimalSound();
    Dog dog;
    dog.AnimalSound();
    return 0;
}