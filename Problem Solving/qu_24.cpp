// C++ File Handling Programs
#include <bits/stdc++.h> 
using namespace std;
void menu () {
    cout << "\n1 . Create a New File \n" << endl;
    cout << "\n2 . Create a Temporary File \n" << endl;
    cout << "\n3 . Write Into a File \n" << endl;
    cout << "\n4 . Rename a File \n" << endl;
    cout << "\n5 . Make a File Read-Only \n" << endl;
    cout << "\n6 . Copy one File into Another File \n" << endl;
    cout << "\n7 . Append the Content of One Text File to Another \n" << endl;
    cout << "\n8 . Get the List of Files in a Directory \n" << endl;
    cout << "\n9.  Read Content From One File and Write it into Another File  \n" << endl;
}

// Function prototyping 
void create() ;
void create_temp() ;
void write();
void rename_file ();
void make_read_only();
void copy_file();
void append_content();
void file_list();
void Write_read();
int main () 
{
    menu ();
    int choice ;
    cout << "\nEnter your choice : ";
    cin >> choice;
    cin.ignore();
        switch (choice)
        {
        case 1: {
            create();
            break;
        }
        case 2: {
            create_temp() ;
            break;
        }
        case 3 : {
            write();
            break;
        }
        case 4 : {
            rename_file ();
            break;
        }
        case 5 : {
            make_read_only();
            break;
        }
        case 6 : {
            copy_file();
            break;
        }
        case 7 : {
            append_content();
            break;
        }
        case 8 : {
            file_list();
            break;
        }
        case 9 : {
            Write_read();
            break;
        }
        }
    return 0;
}
// Function to create a file 
void create () 
{
    ofstream file ;
    file.open("Text.txt");

    // Check the file is created or not 
    if (!file.is_open()) {
        cout << "\nSorry the file is not found !\n";
    }
    else {
        cout << "\nThe file created successfully.\n";
    }

    // Close the file 
    file.close();
}
// function to create a temporary file 
void create_temp() 
{
    FILE* fp = tmpfile();

    // content to write in temporary file 
    cout << "\nEnter your content : ";
    string content;
    cin.ignore();
    getline(cin , content);

    if (fp == NULL) {
        cout << "\nError creating the temporary file.\n";
    }
    
// Writing the content in temporary file 
    fputs(content.c_str() , fp);
    rewind(fp);

    char read[100];
    fgets(read , sizeof(read) , fp);
    cout << read;

    fclose(fp);

}
// Function to write into a file 
void write()
{
    ofstream myFile("Info.txt");

    if (!myFile.is_open()) {
        cout << "\nUnable to find the file .\n";
    }
    
    else {
        string info;
        cout << "\nEnter your text : ";
        cin.ignore();
        getline(cin , info);
        myFile << info;
        myFile.close();
    }
}
// Function to rename a file 
void rename_file ()
{
    const char *old_name = "Details.txt";
    const char *new_name = "New name.txt";

        if (rename(old_name , new_name) != 0) {
            perror("\nError renaming file .");
        }
        else {
           cout << "\nFile rename successful.\n";
        }
}
// Function to create a read only file 
void make_read_only()
{
    ifstream in;

    in.open("Details.txt" );
    if (!in) {
        cout << "\nNo file found.\n";
    }
    else {
        char c;
        while (1) {
            in >> c;
            if (in.eof())
            {
                break;
            }
            cout << c;    
        }
    }
    in.close();
}
// Function to copy one file into another
void copy_file()
{
    string line;
    ifstream in_file("Original.txt");
    ofstream out_file("Copy.txt");

    if (in_file && out_file) {
        while (getline(in_file , line)) {
            out_file << line << "\n";
        }
        cout << "\nCopy Finished.\n";
    }
    else {
        cout << "\nCan't read file .\n";
    }

    in_file.close();
    out_file.close();
}
// Function to Append the Content of One Text File to Another
void append_content()
{
    fstream file ;

    ifstream ifile("info.txt" , ios::in);
    ofstream ofile("Details.txt" , ios::out | ios::app);


    if (!ifile.is_open()) {
        cout << "\nFile not found.\n";
    }
    else {
        ofile << ifile.rdbuf();
    }
    string word;

    file.open("Details.txt");
    while (file >> word) {
        cout << word << " ";
    }
    
}
// Function to Get the List of Files in a Directory
void file_list()
{
   string path("C:\\Users\\Pedp4WPBX5105GRF0122\\Desktop\\VSsample\\");
    std::string command("dir /b ");
    command.append(path);
    const char* final_command = command.c_str();

    system(final_command);
}
// Function to Read Content From One File and Write it into Another File
void Write_read()
{
    ifstream in_file("Details.txt");

    ofstream out_file("info.txt");

    while (!in_file.eof()) {
        string text;
        getline(in_file , text);

        out_file << text << endl;
    }
    

}