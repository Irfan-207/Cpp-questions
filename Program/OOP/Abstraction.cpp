// Demonstrate abstraction
// Hiding unnecessary part and showing only the impotent parts
#include<iostream>
#include<string>
using namespace std;

class shape{ //abstract class
    virtual void draw() = 0 ; // pure virtual function
};
class circle{
    public:
        void draw(){
            cout << "Draw a circle.\n";
        }
};
int main()
{
    circle c1;
    c1.draw();
    return 0;
}