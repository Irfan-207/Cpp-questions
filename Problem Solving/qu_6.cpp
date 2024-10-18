// C++ Program For Fibonacci Numbers
#include<iostream>
using namespace std;

void PrintFib(int index)
{
    int t1 = 0 , t2 =1 , nextTerm;
    cout << "Fibonacci Series: " << t1 << " , " << t2 << " , ";
    nextTerm = t1 + t2;

    while (nextTerm <= index)
    {
        cout << nextTerm << " , ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}
int main()
{
    int index;
    cout << "Enter the index number: ";
    cin >> index;
    if (index < 0)
    {
        cout << "Error!!!!";
    }
    else{
        PrintFib(index);
    }
    return 0;
}