#include <iostream>
using namespace std;

int main()
{
        char name[10], last_name[10], stream[10], choice;
        string str;
        int age, classs, roll_no, percentage;
        cout << "School Management System" << endl;
        cout << endl
             << "Enter your name" << endl;
        cin >> name;
        cout << "Enter your last name" << endl;
        cin >> last_name;
        cout << "Enter your Age" << endl;
        cin >> age;
        cout << "Enter your class" << endl;
        cin >> classs;
        cout << "Enter your roll_no" << endl;
        cin >> roll_no;
        cout << "Enter your percentage" << endl;
        cin >> percentage;
        cout << "Enter your stream" << endl;
        cin >> stream;

        cout << endl
             << "Loading your biodata" << endl;
        cout << "Your name is " << name << endl;
        cout << "Your last name is " << last_name << endl;
        cout << "Your Full name is " << name << last_name << endl;
        cout << "Your age is " << age << endl;
        cout << "You are studying in " << classs << " standard" << endl;
        cout << "Your roll number is " << roll_no << endl;
        cout << "You have scored " << percentage << " in your last semester" << endl
             << "Could've done better " << endl;
        cout << "You have opted for " << stream << endl
             << endl;
        cout << "Thanks for using my program " << endl;
        cout <<"Want to give a feedback" << endl;
        cin >> choice;
        if (choice == 'y')
        {
                cout << "I knew you'd never disappoint us " << endl;
                cout << "Write your feedback here : ";
                cin>>str;
                getline(cin,str);
                cout << "Your feedback have been stored" << endl;
                cout << str << endl;
        }
        else {
                cout << "Nevermind, It's on you whether to give us a feedback or not" << endl;
                cout << "Thanks again" << endl;
        }
}
