// C++ Program to Create a Class and Object and show encapsulation
#include<iostream>
#include<string>
using namespace std;

// Create a class 
class person {
    private :
        int id;
    public :
        string name ;
        int age ;
    
    // Constructor
    person(string name , int age) {
        this -> name = name ;
        this -> age = age ;
    }
    // method 
    void introduction() {
        cout << "\nHi. Nice to meet you . I am " << name << " . I'm " << age << " years old . Would you tell me about yourself . \n" << endl; 
    }
    // Setter and getter methods for private attribute
    void setId(int id) {
        this -> id = id;
    }
    int getId(){
        return id;
    }
};

int main ()
{
    string name ;
    int age ;
    int id;
    cout << "\nEnter your name : ";
    // cin.ignore();
    getline(cin , name);
    cout << "\nEnter your age : ";
    cin >> age ;
    person p1 (name , age); // create an object
    p1.introduction(); // call the method
    cout << "\nWould you like to share your id ? If yes then enter 1\n" << endl;
    int n;
    cin >> n;
    if (n == 1){
        cout << "\nEnter your id : ";
        cin >> id;
        p1.setId(id);
        cout << "\nMy id is " << p1.getId() << endl;
    }
    else {
        cout << "\nThe user don't want to share his id. \n";
    }
    return 0;
}