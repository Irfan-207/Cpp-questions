//Demonstrate the topic file in c++
#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;
int main()
{
    //create and open a text file
    ofstream myFile1("First file.txt");
    myFile1 << "Files can be tricky but it's fun enough!!" << endl;  //write to the file
    myFile1.close(); //close the file


    //read from the text file
    ifstream myFile2("Second file.txt");
    // Create a text string, which is used to output the text file
    string myText;
    // Use a while loop together with the getline() function to read the file line by line
    while (getline(myFile2 , myText))   
    {
        cout << myText;
    }
    //close the file
    myFile2.close();


    // Get the timestamp for the current date and time
    time_t timestemp;
    time(&timestemp);

    // Display the date and time represented by the timestamp
    cout << ctime(&timestemp);
    return 0;
}