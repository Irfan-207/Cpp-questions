// C++ Control Flow Programs
// #include<iostream>
// #include<numeric>
#include<bits/stdc++.h>
using namespace std;
void menu(){
    cout << "\t\t\t\t\t\n1. Reverse number .\n";
    cout << "\t\t\t\t\t\n2. Find GCD .\n";
    cout << "\t\t\t\t\t\n3. Find LCM .\n";
    cout << "\t\t\t\t\t\n4. Find prime numbers between two intervals.\n";
    cout << "\t\t\t\t\t\n5. Check Neon number .\n";
    cout << "\t\t\t\t\t\n6. Check Armstrong Number .\n";
    cout << "\t\t\t\t\t\n7. Print Armstrong Numbers between a range.\n";
    cout << "\t\t\t\t\t\n8. Print fibonacci numbers upto N th index .\n ";
}
void rev_num();
void gcd();
void lcm();
void prime();
void neon_num();
void arm();
void rArm();
void fibb();
int main ()
{
    menu();
     int choice ;
      cout << "Enter your choice: ";
       cin >> choice;
        switch (choice)
        {
                case 1 :
                {
                    rev_num();
                    break;
                }
                case 2:
                {
                    gcd();
                    break;
                }
                case 3:
                {
                    lcm();
                    break;
                }
                case 4:
                {
                    prime();
                    break;
                }
                case 5:
                {
                    neon_num();
                    break;
                }
                case 6:
                {
                    arm();
                    break;
                }
                case 7:
                {
                    rArm();
                    break;
                }
                case 8:
                {
                    fibb();
                    break;
                }
        }
    return 0;
}
// Reverse a number
void rev_num()
{
    int rev_num = 0;
    cout << "Enter your number : ";
    int num;
    cin >> num;
    cout << "Reversed number : ";
    while (num > 0)
    {
        rev_num = rev_num * 10  + num % 10;
        num = num / 10;
    }
    cout << rev_num;
}
// Find GCD
// The idea is to find the minimum of the two numbers and then find the common divisor starting from the minimum number and decrementing it by 1 until a common divisor is found.
void gcd()
{
    cout << "Enter your first number : ";
    int num1;
    cin >> num1;
    cout << "Enter your second number : ";
    int num2;
    cin >> num2;
    int result = (num1 > num2) ? num2 : num1; //Initialize a variable result with the minimum of a and b.
    while (result > 0) {
        if (num1 % result == 0 && num2 % result ==0)
        {
            break;
        }
        else{
            result --;
        }
    }
    cout << "GCD = " << result;
}
// Find LCM
void lcm()
{
      cout << "Enter your first number : ";
    int num1;
    cin >> num1;
    cout << "Enter your second number : ";
    int num2;
    cin >> num2;
    int max = (num1 > num2) ? num1 : num2 ;
    int lcm;
    while (1)
    {
        if (max % num1 ==0 && max % num2 == 0)
        {
            lcm = max;
            break;
        }
        else{
            max++;
        }
    }
    cout << "The LCM : " << lcm;

}
// Find prime numbers between two intervals
void prime()
{
    int start , finish;
    cout << "Enter starting point : ";
    cin >> start;
    cout << "Enter finishing point : ";
    cin >> finish;
    cout << "Prime numbers between " << start << " to " << finish << " are : ";
    // Travel each number
    int flag;
    for (int i = start; i <= finish; i++)
    {
        if(i == 1 || i == 0){
            continue;
        }
        // flag variable to tell is the number prime or not 
        flag = 1;
        
        for (int j = 2; j < i/2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout << i << " ";
        }
    }
}
// Find neon number
void neon_num()
{
    int num;
    cout << "Enter your number : ";
    cin >> num;

    int sqr = pow(num , 2);
    int digit = 0;

    while(sqr != 0) {
        digit += (sqr % 10);
        sqr = sqr / 10;
    }
    if (digit == num) {
        cout << num << " is a neon number .";
    }
    else {
        cout << num << " is not a neon number";
    }
}
// Check Armstrong Number
void arm()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int temp = num ;
    int p = 0;

    // Calculate order of the number
    while (temp)
    {
        p ++ ;
        temp = temp / 10;
    }
    // check the number is armstrong
    int sum = 0;
    temp = num;
    while (temp)
    {
        int rem = temp % 10;
        // calculate the power
        int power = 1;
        for (int i = 0; i < p; i++)
        {
            power *= rem;
        }
        sum += power ;
        temp = temp / 10;
    }
    // output result
    if (sum == num) {
        cout << num << " is an armstrong number .";
    }
    else {
        cout << num << " is not an armstrong number";
    }
}
// Print armstrong numbers between a range
void rArm()
{
    int start , finish;
    cout << "Enter the starting point :";
    cin >> start;
    cout << "Enter the finishing point :";
    cin >> finish;

    for (int i = start; i <= finish; i++) {
        int temp = i;
        int p =0;
        while (temp) {
            p++;
            temp = temp / 10;
        }
        // Check the number is armstrong
        int sum = 0;
        temp = i;
        while (temp) {
            int rem = temp % 10;
            // calculate the power
            int power = 1;
            for (int i = 0; i < p; i++) {
                power *= rem;
            }
            sum += power;
            temp = temp / 10;
        }
        if (sum == i) {
            cout << i << " ";
        }
        else{
            continue;
        }
    }
}
// Print fibonacci number
void fibb()
{
    int index ;
    cout << "Enter an index : ";
    cin >> index;
    int t1 = 0 , t2 = 1, nextTerm;
    nextTerm = t1 + t2;
    cout << t1 << " " << t2 << " ";

    for (int i = 2; i <= index; ++i)
    {
        cout << nextTerm << " " ;
        t1 = t2 ;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}