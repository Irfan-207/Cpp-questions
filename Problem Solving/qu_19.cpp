// C++ Conversion Programs
#include<iostream>
#include<cmath>
#include<string>
#include<sstream>
using namespace std;
 // GLOBAL variable
int binary , decimal , octal;
string hexa;
void menu() {
    cout << "\n1.  Binary to Decimal Conversion\n" << endl;
    cout << "\n2.  Binary to Octal Conversion\n" << endl;
    cout << "\n3.  Octal to Decimal Conversion\n" << endl;
    cout << "\n4.  Decimal to Octal Conversion\n" << endl;
    cout << "\n5.  Hexadecimal to Decimal Conversion\n" << endl;
    cout << "\n6.  Decimal to Hexadecimal Conversion\n" << endl;
    cout << "\n7.  Decimal to Binary Conversion\n" << endl;
    cout << "\n8.  String to Double Conversion\n" << endl;
    cout << "\n9. Double to String Conversion\n" << endl;
    cout << "\n10. String to Long Conversion\n" << endl;
    cout << "\n11. Long to String Conversion\n" << endl;
}
// Function prototyping
// Number system
void Binary_to_Decimal ();
void Binary_to_Octal();
void Octal_to_Decimal();
void Decimal_to_octal();
void Hexadecimal_to_Decimal();
void Decimal_to_Hexadecimal();
void Decimal_to_Binary();
// Datatype conversion
void string_to_double();
void Double_to_String();
void string_to_long();
void long_to_string();
int main()
{
    menu();
    int choice ;
    cout << "\nEnter your choice : ";
    cin >> choice;
    switch (choice)
    {
        case 1 :{
            Binary_to_Decimal ();
            break;
        }
        case 2 :{
            Binary_to_Octal();
            break;
        }
        case 3 :{
            Octal_to_Decimal();
            break;
        }
        case 4 :{
            Decimal_to_octal();
            break;
        }
        case 5 :{
            Hexadecimal_to_Decimal();
            break;
        }
        case 6 :{
            Decimal_to_Hexadecimal();
            break;
        }
        case 7 :{
            Decimal_to_Binary();
            break;
        }
        case 8 :{
            string_to_double();
            break;
        }
        case 9 :{
            Double_to_String();
            break;
        }
        case 10: {
            string_to_long();
            break;
        }
        case 11: {
            long_to_string();
            break;
        }
        default : {
            cout << "\nSorry!! Your choice is invalid ." << endl;
            break;
        }
    }
    return 0;
}
// function to convert binary numbers into decimal number
void Binary_to_Decimal ()
{
    int base = 1 ;
    int decimal = 0;
    cout << "\nEnter your binary number : ";
    cin >> binary;

        cout << "\nBinary : " << binary << endl;
        while (binary != 0)
        {
            int last_digit = binary % 10;
            binary = binary / 10;
            decimal += (last_digit * base);
            base *= 2;
        }
        cout << "\nDecimal : " << decimal << endl;
}
// Function to convert binary numbers to octal number
void Binary_to_Octal()
{
    int base = 1 ;
    cout << "\nEnter your Binary number : ";
    cin >> binary;
    int octal = 0, rem;
    decimal = 0;
    cout << "\nBinary number : " << binary << endl;
    // Binary to decimal conversion 
    while (binary != 0) {
        int last = binary % 10;
        binary = binary / 10;
        decimal += (last * base);
        base *= 2;
    }
    
    base = 1;

    // Decimal to octal
        int i =0;
        
        while (decimal > 0) {
            rem = decimal % 8;
            octal += rem * base;
            decimal /= 8;
            base *= 10;
        }
        cout << "\nOctal number : " << octal << endl;
}
// Function to convert octal numbers into decimal number
void Octal_to_Decimal()
{
    int base = 1 ;
    cout << "\nEnter the octal number : " ;
    cin >> octal;
    cout << "\nOctal number : " << octal << endl;
    int remind ;
    decimal = 0;
        while (octal != 0)
        {
            remind = octal % 10;
            decimal += remind * base;
            octal /= 10;
            base *= 8;
        }
            cout << "\nDecimal number : " << decimal << endl;
}
// Function to convert decimal numbers into octal numbers
void Decimal_to_octal()
{
    int base = 1 ;
    cout << "\nEnter the decimal number : ";
    cin >> decimal;
    cout << "\nDecimal number : " << decimal << endl;
    int remin ;
        while (decimal > 0)
        {
            remin = decimal % 8;
            octal += remin * base ;
            decimal /= 8;
            base *= 10;
        }
        cout << "\nOctal number : " << octal << endl;
        
}
// function to convert Decimal numbers into binary number
void Decimal_to_Binary()
{
    cout << "\nEnter your decimal value : ";
    cin >> decimal;
    cout << "\nDecimal number : " << decimal << endl;
    int binary[32];
        int i =0;
        while (decimal > 0) {
            binary[i] = decimal % 2;
            decimal /= 2;
            i++;
        }
        
        cout << "\nBinary number : " ;
        for (int j = i-1; j >= 0; j--) {
            cout << binary[j] ;
        }
}
// Function to convert a Hexadecimal value to Decimal
void Hexadecimal_to_Decimal()
{
    int base = 1 ;
    cout << "\nEnter your hexadecimal value : ";
    cin >> hexa;
    cout << "\nThe hexadecimal value : " << hexa << endl;
    decimal = 0;
    int len = hexa.size();

        for (int i = len - 1; i >= 0; i--)
        {
            if (hexa[i] >= '0' && hexa[i] <= '9') {
                decimal += (hexa[i] - '0') * base;
                base *= 16;
            }
            else if (hexa[i] >= 'A' && hexa[i] <= 'F') {
                decimal += (hexa[i] - 'A' + 10) * base;
                base *= 16;
            }
        }
        cout << "\nDecimal value : " << decimal << endl;

}
// Function to convert a decimal value to a hexadecimal value 
void Decimal_to_Hexadecimal()
{
    int base = 1 ;
    char hexadecimal[20];
    cout << "\nEnter a decimal number : ";
    cin >> decimal;
    cout << "\nDecimal value : " << decimal << endl;
        int i = 0;
        while (decimal != 0) {
                int temp = 0 ;
                temp = decimal % 16;

                if (temp < 10) {
                    hexa[i] = temp + 48;
                    i++;
                }
                else {
                    hexa[i] = temp + 55;
                    i++;
                }
            decimal /= 16;
        }
        
        // print the output
        cout << "\nHexadecimal value : ";
        for (int j = i - 1; j >= 0; j--) {
            cout << hexa[j];
        }
}
// Function to convert a double to a string 
void Double_to_String()
{
    double n;
    cout << "\nEnter a double value : " ;
    cin >> n;
    string s = to_string(n);
    cout << "\nDouble value : " << n << endl;
    cout << "\nString value : " << s << endl;
}
// Function to convert string to double 
void string_to_double()
{
    string s1 , s2;
    cout << "\nEnter your first string : " ;
    cin >> s1;
    cout << "\nEnter the second string : ";
    cin >> s2;

    double d1 = stod(s1);
    double d2 = stod(s2);
    cout << "\nResult in case of string : " << s1 + s2 << endl;
    cout << "\nResult in case of double : " << d1 + d2 << endl;
}
// Function to convert string to long
void string_to_long()
{
    string s1 , s2;
    cout << "\nEnter your first string : " ;
    cin >> s1;
    cout << "\nEnter the second string : ";
    cin >> s2;

    long d1 = stol(s1);
    long d2 = stol(s2);
    cout << "\nResult in case of string : " << s1 + s2 << endl;
    cout << "\nResult in case of double : " << d1 + d2 << endl;
}
// Function to convert long to string 
void long_to_string()
{
    long num;
    cout << "\nEnter your number : ";
    cin >> num;
    cout << "\nLong output : " << num << endl;
    // create a new object of stringstream class
    stringstream stream;

    // add long number to variable of type stringstream
    stream << num;
    string ltos;

    // get string object from stringstream variable using str() method
    ltos = stream.str();
    cout <<"\nString output : " << ltos << endl;
}