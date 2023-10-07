#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream hout;
    hout.open("sample.txt");
    hout<<"This is me."<<endl;
    hout<<"This is also me."<<endl;
    hout<<"This is again me."<<endl;
    hout.close();

    ifstream hin;
    hin.open("sample.txt");

    string st;
    while(hin.eof() == 0)       // eof --> end of file
    {
        getline(hin, st);
        cout<<st<<endl;
    }
    hin.close();
    return 0;
}