#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our file with hout stream
    ofstream hout("sample.txt");

    string name;
    cout << "Enter your name: ";
    cin >> name;

    // writing the string to the file
    hout << "The name entered is: " << name << endl;
    hout.close();

    ifstream hin("sample.txt");

    string content;
    getline(hin, content);
    cout << endl << "The content of the file is : " << endl
         << content << endl;
    hin.close();
    
    return 0;
}