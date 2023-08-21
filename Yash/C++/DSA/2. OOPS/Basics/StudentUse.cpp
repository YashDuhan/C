#include <iostream>
using namespace std;
#include "Student.cpp"

int main()
{
	Student s1,s2,s3,s4,s5;
	cout<<"Enter the data for student 1: "<<endl;
	cout<<"Name: ";
	cin>>s1.name;
	cout<<"Age : ";
	cin>>s1.age;
	cout<<"Roll Number : ";
	cin>>s1.rollNumber;

	cout<<"Details"<<endl;
	cout<<"Name : "<<s1.name<<endl;
	cout<<"Age : "<<s1.age<<endl;
	cout<<"Roll Number : "<<s1.rollNumber<<endl;	
}
