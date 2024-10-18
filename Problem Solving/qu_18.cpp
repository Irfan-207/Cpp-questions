// C++ String Programs
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
string text , text2; // Global variable
void menu() {
        cout << "\n1.  Find the Length of a String.\n";
        cout << "\n2.  Access Characters in a Given String\n";
        cout << "\n3.  Determine the Unicode Code Point at a given index.\n";
        cout << "\n4.  Replace a Character in a String.\n";
        cout << "\n5.  Compare Two Strings.\n";
        cout << "\n6.  Add/Concatenate Two Strings.\n";
        cout << "\n7.  Add 2 Binary Strings.\n";
        cout << "\n8.  Remove Leading Zeros.\n";
        cout << "\n9.  Compare Two Strings Lexicographically.\n";
        cout << "\n10. Reverse a String.\n";
        cout << "\n11. check if the String is Palindrome.\n";
        cout << "\n12. Print the First Letter of Each Word of a String.\n";
        cout << "\n13. Insert a String into Another String.\n";
        cout << "\n14. Splitting into a Number of Sub-Strings.\n";
        cout << "\n15. Check Whether the Given String is Pangram.\n";
}

//Function prototyping
void L_String();
void Access();
void uni();
void replace();
void comp();
void add();
void add_binary();
void remove_zero();
void Lexicographically();
void reverse_string();
void Palindrome();
void first();
// Function to demonstrate insert() function [START]
void insert_character();
void insert_character_multiple();
void insert_string();
// Function to demonstrate insert() function [END]
void Splitting ();
void Pangram();
int main()
{
    menu();
    cout << "\nEnter your choice : ";
    int choice;
    cin >> choice;
        switch (choice ) {
                case 1 : {
                    L_String();
                    break;
                }
                case 2 : {
                    Access();      
                    break;
                }
                case 3 : {
                    uni();         
                    break;
                }
                case 4 : {
                    replace();
                    break;
                }
                case 5 : {
                    comp();        
                    break;
                }
                case 6 : {
                    add();         
                    break;
                }
                case 7 : {
                    add_binary();  
                    break;
                }
                case 8 : {
                    remove_zero();
                    break;
                }
                case 9 : {
                    Lexicographically();         
                    break;
                }
                case 10 : {
                    reverse_string();
                    break;
                }
                case 11 : {
                    Palindrome();
                    break;
                }
                case 12 : {
                    first();       
                    break;
                }
                case 13 : {
                    cout << "\n1. Insert a Single Character\n";
                    cout << "\n2. Insert a Single Character Multiple Times\n";
                    cout << "\n3. Insert a String\n";

                    cout << "\nEnter your choice : " ;
                    cin >> choice;
                        switch (choice)
                        {
                            case 1 : {
                                insert_character();
                                break;
                            }
                            case 2 : {
                                insert_character_multiple();
                                break;
                            }
                            case 3 : {
                                insert_string();
                                break;
                            }
                            default : {
                                cout << "\nYou have entered an invalid choice .";
                                break;
                            }
                        }
                    break;
                }
                case 14 : {
                    Splitting ();
                    break;
                }
                case 15 : {
                    Pangram();
                    break;
                }
                default : {
                    cout << "\nSorry . Look like you entered an invalid choice.\n";
                    break;
                }
        }
}
// Function to find the length of a string
void L_String()
{
    cout << "\nEnter your text : ";
    cin.ignore(); // This ignores any leftover newline character in the input buffer
    getline(cin , text);
    cout << endl << "The length of the text is " << text.size() << endl;
}
// Function to access character in a string
void Access()
{
    cout << "\nEnter your text : ";
    cin.ignore();
    getline(cin , text);
    cout << "\nYour text : " << text << endl;
    cout << "\nEnter the character : " ;
    char c;
    bool found = false;
    cin >> c;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == c) {
            cout << "\nThe character " << c <<" is in index position " << i << endl;
            found = true;
            break; 
        }
    }
    if (!found) {
        cout << "\nSorry your entered character is not available in your text.";
    }
}
// Function to Determine the Unicode Code Point at a given index
void uni()
{
    cout << "\nEnter your text : ";
    cin.ignore();
        getline(cin , text);
            cout << "\nYour text : " << text << endl;
    
        for (int i = 0; i < text.size(); i++) {
            int code  = text[i];
            cout << "\nThe Unicode Code Point At " << i << " is = " << code << endl;
        }   
}
// Function to replace a character in a text
void replace()
{
    cout << "\nEnter your text : ";
    cin.ignore();
    getline(cin , text);
    cout << "\nYour text : " << text << endl;

    char rep;
    cout << "\nEnter the character you want to replace : ";
    cin >> rep;
    char cha;
    cout << "\nEnter the character that you want to replace with : ";
    cin >> cha;

        for (int i = 0; i < text.size(); i++) {
            if (text[i] == rep) {
                text[i] = cha;
                break;
            }
        }
    cout << "\nAfter replace the character the text : " << text << endl;
}
// Function to compare two string
void comp()
{    
    // First text
    cout << "\nEnter your first text : ";
    cin.ignore();
    getline(cin , text);
    cout << "\nFirst text : " << text << endl;
    
    // Second text 
    cout << "\nEnter your second text : ";
    getline(cin , text2);
    cout << "\nSecond text : " << text2 << endl;

    int c = text.compare(text2);
        if (c != 0) {
                cout << text << " and " << text2 << " are not equal" << endl;

            if (c > 0) {
                cout << text << " is greater than " << text2 << endl;
            }
            else {
                cout << text2 << " is greater than " << text << endl;
            }
        }
        else {
            cout << text << " and " << text2 << " are equal" << endl;
        }
}
// Function to concatenate two string
void add()
{
    // First text
    cout << "\nEnter your first text : ";
    cin.ignore();
    getline(cin , text);
    cout << "\nFirst text : " << text << endl;
    
    // Second text 
    cout << "\nEnter your second text : ";
    getline(cin , text2);
    cout << "\nSecond text : " << text2 << endl;

    // Concatenate strings
    cout << "\n1. Give Space between texts . " << endl;
    cout << "\n2. Don't give Space between texts . " << endl;
    cout << "\nEnter your choice : ";
    int num ;
    cin >> num ;
        if (num == 1) {
            cout << "\nConcatenated string : " << text << " " << text2 << endl;
        }
        else{
            cout << "\nConcatenated string : " << text + text2 << endl;
        }
}
// Function to Add 2 Binary Strings
void add_binary()
{
    string result = ""; // Initialize result
    
    // First text
    cout << "\nEnter your first text : ";
    cin.ignore();
    getline(cin , text);
    cout << "\nFirst text : " << text << endl;
    
    // Second text 
    cout << "\nEnter your second text : ";
    getline(cin , text2);
    cout << "\nSecond text : " << text2 << endl;
    int i = text.size() - 1 , j = text2.size() - 1 , carry = 0;
    
    // Loop until both strings are processed or there is a carry left
    while (i >= 0 || j >= 0 || carry)
    {
        int sum =carry; // Start with the carry from the previous step
        if (i >= 0) {
            sum += text[i--] - '0'; // Add bit from a if available and move to the next bit
        }
        if (j >= 0) {
            sum += text2[j--] - '0'; // Add bit from b if available and move to the next bit
        }
        
        result += (sum % 2) + '0'; // Append the remainder (0 or 1) to the result
        carry = sum / 2; // Update carry (0 or 1) for the next step
    }
    
    // The result is built in reverse order, so reverse it to get the correct sum
    reverse(result.begin() , result.end());
    cout << "\nThe sum of the two binary string is : " << result << endl;
}
// Function to remove leading zeros
void remove_zero()
{
    cout << "\nEnter your number series : ";
    cin >> text;
    cout << "\nYour numbers : " << text << endl;
    int i = 0;
        while (text[i] == '0') {
            i++;
        }
        text = text.erase(0 , i);
    cout << "\nFinal numbers : " << text << endl;
}
// function to compare two string Lexicographically
void Lexicographically()
{
    // First text
    cout << "\nEnter your first text : ";
    cin.ignore();
    getline(cin , text);
    cout << "\nFirst text : " << text << endl;
    
    // Second text 
    cout << "\nEnter your second text : ";
    getline(cin , text2);
    cout << "\nSecond text : " << text2 << endl;

    // compare
    int c = text.compare(text2);

    string n = (c > 0) ? text : text2;

    for (int i = 0; i < n.size(); i++)
    {
        if (text[i] != text2[i]) {
            if (text[i] < text2[i]) {
                cout << "\nThe Lexicographically smaller string is : " << text << endl;
                break;
            }
            else {
                cout << "\nThe Lexicographically smaller string is : " << text2 << endl;
                break;                
            }
        }
        else if (i == n.size())
        {
            if (text.size() < text2.size()) {
                cout << "\nThe Lexicographically smaller string is : " << text << endl;
                break;
            }
            else {
                cout << "\nThe Lexicographically smaller string is : " << text2 << endl;
                break;
            } 

        }
    }
    
}
// Function to reverse a string
void reverse_string()
{
    cout << "\nEnter your text : ";
    cin.ignore();
    getline(cin , text);
    cout << "\nEntered text : " << text << endl;

    text2.resize(text.size()); // Resize text2 to the same size as text

        for (int i = 0; i < text.size(); i++) {
            text2[i] = text[text.size() - 1 - i];
        }
    cout << "\nReversed text : " << text2 << endl;
}
// Function to check Palindrome string
void Palindrome()
{
    cout << "\nEnter your text : ";
    cin.ignore();
    getline(cin , text);
    cout << "\nEntered text : " << text << endl;

    text2.resize(text.size()); // resize text2 to the same size as text

        for (int i = 0; i < text.size(); i++) {
            text2[i] = text[text.size() - 1 - i];
        }
    int x = text.compare(text2);
        if (x==0) {
            cout << endl <<  text << " is a palindrome string ." << endl; 
        }
        else {
            cout << endl << text << " is not a palindrome string . " << endl;
        }
    cout << "\nOriginal text : " << text << endl;
    cout << "\nReversed text : " << text2 << endl;
}
// Function to print the first character of each word
void first()
{
    cout << "\nEnter your text : ";
    cin.ignore();
    getline(cin, text);
    cout << "\nEntered text : " << text << endl;

    bool v = true;
    string result = "";
            for (int i = 0; i < text.size(); i++)
            {
                if (text[i] == ' ') {
                  v = true;  
                }
                else if (text[i] != ' ' && v == true) {
                    result.push_back(text[i]);
                    v = false;
                }
            }
        cout << "\nThe first characters are : " <<  result << " ";
}
// Function to demonstrate insert() function
int i , num , start;
char c;
// Insert a single character
void insert_character()
{
    cout << "\nEnter your text : ";
    cin.ignore();
    getline(cin, text);
    cout << "\nEntered text : " << text << endl;

    // Insert a single character 
    cout << "\nEnter the index position where you want to insert the character : ";
    cin >> i;
    cout << "\nEnter the character you want to insert : ";
    cin >> c;

        auto it = text.insert(text.begin() + i , c );
        cout << "\nChanged text : " << text << endl;
}
// Insert a Single Character Multiple Times
void insert_character_multiple()
{
    cout << "\nEnter your text : ";
    cin.ignore();
    getline(cin, text);
    cout << "\nEntered text : " << text << endl;

    // Insert a single character
    cout << "\nEnter the index position where you want to insert the character : ";
    cin >> i;
    cout << "\nEnter the character you want to insert : ";
    cin >> c;
    cout << "\nHow many times you want to insert the character : ";
    cin >> num;

        auto it = text.insert(text.begin() + i , num , c);
        cout << "\nChanged text : " << text << endl;
}
// function to Insert a String
void insert_string()
{
    // First text
    cout << "\nEnter the first text : ";
    cin.ignore();
    getline(cin , text);
    // Second text
    cout << "\nEnter the second text : ";
    getline(cin , text2);

    // Print
        cout << "\nFirst text : " << text << endl;
        cout << "\nSecond text : " << text2 << endl;
    // Insert
        cout << "\nEnter the index position where you want to enter the text : ";
        cin >> i;

    cout << "\n1. Enter the second text into first text." << endl;
    cout << "\n2. Enter the first text into second text. " << endl; 
    cout << "\nEnter your choice : ";
    int choice ;
    cin >> choice;

        switch (choice) {
            case 1:{
                text.insert(i , text2);
                cout << "\nModified text : " << text << endl;
                break;
            }
            case 2 : {
                text2.insert(i , text);
                cout << "\nModified text : " << text2 << endl;
                break;
            }
            default:{
                cout << "\nYou have entered an invalid choice .";
                break;
            }
        }
}
// Function to Splitting into a Number of Sub-Strings
void Splitting ()
{
    string delim;
    cout << "\nEnter the text : ";
    cin.ignore();
    getline(cin , text);
    cout << "\nEnter the delimiter: ";
    cin >> delim;

        // Initial the starting position
        int start = 0;
        // Find the first occurrence of the delimiter 
        int end = text.find(delim);
        cout <<"\nAfter Splitting word : \n";
            // Loop until no mora delimiter found
            while (end != -1)
            {
                // Output the substring from start to the position of the delimiter
                    cout << text.substr(start , end-start) << endl;
                // update start position after the delimiter 
                    start = end + delim.size();
                // Find the next occurrence of delimiter
                    end = text.find(delim , start);
            }
            cout << text.substr(start , end-start) << endl;
}
// Function to check if the string is Pangram or not
void Pangram()
{
    cout << "\nA string is a Pangram if the string contains all the English alphabet letters.\n";
    // Get text
    cout << "\nEnter your text : ";
    cin.ignore();
    getline(cin , text);
    cout << "\nEntered text : " << text << endl ;

    // Vector to mark the presence of each alphabet letter
    vector<bool> mark(26 , false);
    int index; //store the index of the character in the alphabet

    for (int i = 0; i < text.size(); i++)
    {
        // If the character is uppercase, find the index by subtracting 'A'
        if (text[i] >= 'A' && text[i] <= 'Z' ) {
            index = text[i] - 'A';
        }
        // If the character is lowercase, find the index by subtracting 'a'
        else if (text[i] >= 'a' && text[i] <= 'z') {
            index = text[i] - 'a';
        }
        // If the character is not an alphabet, skip to the next one
        else {
            continue;
        }
            // Mark the character as present
            mark[index] = true;
    }

    // check if all character are marked
    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (!mark[i]) {
            isPangram = false;
            break;
        }
    }
    // Output 
    if (isPangram) {
        cout << "\nYour entered \" " << text << " \" text is a Pangram string." << endl;
    }
    else {
        cout << "\nYour entered \" " << text << " \" text is not a Pangram string.\n";
    }
}