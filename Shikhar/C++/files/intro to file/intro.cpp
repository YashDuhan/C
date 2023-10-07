#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream  --> derived from fstreambase
3. ofstream  --> derived from fstreambase
*/

// in order to work with files in c++, you will have to open it. Primarily, there are two ways to open a file:
// 1. using the constructor
// 2. using the member function open() of the class

int main(){
    string st = "hello, how are you ?";
    // opening file using constructor and writing it
    ofstream out("sample1.txt");  //write operation
    out<<st;

    string st2;
    //opening files using constructor and reading it
    ifstream in("sample2.txt");
    // in>>st2;         // it will be reading only one word
    getline(in, st2);   // it will read single line
    //to read more lines, more getline() function will be used
    cout<<st2;
    return 0;
}