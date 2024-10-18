#include <iostream>
#include<cmath>
#include<mutex>
#include<thread>
using namespace std;
int x;
//Demonstrate extern storage class
void externStorage()
{
    cout << "Demonstrating extern class\n";

    extern int x;
    cout << "Value of the variable 'x' declared as extern : " << x << endl;
    x = 2;
    cout << "Modified value of 'x' is : " << x ;
}

//Demonstrate static storage class
int staticFun()
{
    cout << "For static variables: ";
    static int count = 0;
    count++;
    return count;
}

int nonStaticFun()
{
    cout << "For Non-Static variables: ";

    int count = 0;
    count++;
    return count;
}

//Demonstrate register storage class
void registerStorageClass()
{
    cout << "Demonstrating register class\n";

    register char b = 'G';
    cout << "Value of the variable 'b' declared as register: " << b;
} 

// Defining thread-local variable
thread_local int value = 10;
//Mutex for syncronization
mutex mtx ;
int main() 
{
    externStorage();
    cout << endl;
    cout << "============================================="<< endl;
    cout << "=============================================" << endl;
    // Calling the static parts
    cout << staticFun() << "\n";
    cout << staticFun() << "\n";
    // Calling the non-static parts
    cout << nonStaticFun() << "\n";
    cout << nonStaticFun() << "\n";
    /* cout << "=============================================" << endl;
    cout << "=============================================" << endl;
    registerStorageClass();
    cout << endl; */
    cout << "=============================================" << endl;
    cout << "=============================================" << endl;

    // Created 3 threads
    //Modify the value in tread 1
    thread t1([](){
        value +=18;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 1 value : " << value << endl;
    }
    );
    thread t2([](){
        value +=7;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 2 value : " << value << endl;
    }
    );
    thread t3([](){
        value +=13;
        lock_guard<mutex> lock(mtx);
        cout << "Thread 3 value : " << value << endl;
    }
    );

    // Wait for all threads to finish
    t1.join();
    t2.join();
    t3.join();

    // Print the value of value in the main thread
    cout << "Main thread value: " << value << '\n';
    return 0;
}