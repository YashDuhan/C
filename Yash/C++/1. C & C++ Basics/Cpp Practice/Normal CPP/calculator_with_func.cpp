#include <iostream>
using namespace std;
int a, b;

void add()
{
        cout << "Your Output is" << a + b;
}

void subtract()
{
        cout << "Your Output is" << a - b;
}

void multiply()
{
        cout << "Your Output is" << a * b;
}

void divide()
{
        cout << "Your Output is" << a / b;
}
int main()
{
        cout << "Add 2 num" << endl;
        cin >> a >> b;
        cout << "1. Add" << endl
             << "2. Minus" << endl
             << "3. Multiply" << endl
             << "4. Divide" << endl;

        int choice;
        cout << "Enter your choice" << endl;
        cin >> choice;

        if (choice == 1)
        {
                cout << endl;
                add();
        }
        else if (choice == 2)
        {
                cout << endl;
                subtract();
        }
        else if (choice == 3)
        {
                cout << endl;
                multiply();
        }
        else if (choice == 4)
        {
                cout << endl;
                divide();
        }
        else
        {
                cout << "An error Occured..." << endl;
        }
}
