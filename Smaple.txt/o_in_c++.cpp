#include<iostream>
#include<fstream>
/*
The useful classes for working with files in c++ are:
1.fstrembase
2.ifstream ----->derived from fstream base
3.ofstream ----->derived from fstream base

in order to work with a file in c++, you will have to open it,primarly, there are two way to open a file :
1. using constructor 
2. using member func open() of the class 
*/
using namespace std;

int main(){
    // string s="Hi this is sample txt file.";
    // // opening a file using constructor
    // ofstream out("Sample.txt");// write operation
    // and out is here fstream object
    // out<<s;

    // string s1;
    // // opening a file using constructor
    // ifstream in("Sample.txt");// Read operation
    // // in>>s1;// there is a problem using in we cannt get whole content after 
    // // space for getting whole line we use here getline() func
    // getline(in,s1);
    // // in is here is ifstream object
    // cout<<s1;
    // in.close(); // closing file

    ofstream h;
    // opening a file using open() func
    h.open("Sample.txt");
    // writing in file
    h<<"This is me.\n";
    h<<"This is me.\n";
    h<<"This is me.\n";
    h<<"This is ching";
    h.close();
    // reading from file
    ifstream hin;
    string s1,s2;
    hin.open("Sample.txt");
    // hin>>s1>>s2;
    // cout<<s1<<s2<<endl;
    // if we want to read a whole line use while loop
    while (hin.eof()==0) // where eof() is end of file
    {
        getline(hin,s1);
        cout<<s1<<endl;
    }
    
    hin.close();
return 0;
}