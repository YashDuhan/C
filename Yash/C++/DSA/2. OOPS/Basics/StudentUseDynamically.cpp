#include <iostream>
using namespace std;
#include "Student.cpp"

int main()
{
    Student *s1 = new Student;

    cout<<"Enter the details"<<endl;
    cout<<"Enter the name : ";
    cin>>(*s1).name;
    cout<<"Enter the Roll Number : ";
    cin>>(*s1).rollNumber;
    cout<<"Enter the age : ";
    cin>>(*s1).age;

    cout<<"\nDetails are "<<endl;
    cout<<"Name is : "<<(*s1).name<<endl;
    cout<<"Roll Number is : "<<(*s1).rollNumber<<endl;
    cout<<"Age is : "<<(*s1).age<<endl;

}