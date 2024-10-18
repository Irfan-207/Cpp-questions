#include<iostream>
using namespace std;
int main()
{
    int ver ;
    int &p = ver;
    cout << &p << endl << &ver;
    return 0;
}