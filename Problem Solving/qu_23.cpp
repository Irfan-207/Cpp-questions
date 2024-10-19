// C++ Program To Add Two Complex Numbers
#include<iostream>
#include<string>
using namespace std;
class complex{
    public :
        int real , img;
    complex(int real = 0 , int img = 0) {
        this -> real = real;
        this -> img = img;
    }

    complex operator+ (complex const &obj) {
        complex result ;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }

    complex operator- (complex &obj) {
        complex result ;
        result.real = real - obj.real;
        result.img = img - obj.img;
        return result;
    }
    void print() {
        cout << "\nResult = " << real << " + " << img << "i \n";
    }
};
int main ()
{
    int r1 , r2 , i1 , i2;

    // get  info form the user
            char op ;
        cout << "\nEnter the real part of the first number : ";
        cin >> r1;
        cout << "\nEnter the imaginary part of the first number without i : " ;
        cin >> i1;
        cout << "\nEnter the real part of the second number : ";
        cin >> r2;
        cout << "\nEnter the imaginary part of the second number without i : " ;
        cin >> i2;
        cout << "\nWhat kind of operation you want to do (addition / subtraction) : ";
        cin >> op;

        // Create two number
        complex num1(r1 , i1) , num2 (r2 , i2);
        complex res ; // to store the calculated result
            if (op == '+') {
                res = num1 + num2;
            }
            else {
                res = num1 - num2 ;
            }

            res.print();
    return 0;
}