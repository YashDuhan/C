#include <iostream>
using namespace std;

int main()
{
    int Amount;
    cout << "Enter Amount" << endl;
    cin >> Amount;
    int choice = 1;
    switch (choice)
    {
    case 1:
        if (Amount >= 100)
        {
            cout << Amount / 100 << " 100 notes" << endl;
            Amount = Amount % 100;
        }

    case 2:
        if (Amount >= 50)
        {

            cout << Amount / 50 << " 50 notes" << endl;
            Amount = Amount % 50;
        }

    case 3:
        if (
            Amount >= 20)

        {
            cout
                << Amount / 20 << " 20 notes" << endl;
            Amount = Amount % 20;
        }

    case 4:
        if (
            Amount >= 1)
        {
            cout
                << Amount / 1 << " 1 notes" << endl;
            Amount = Amount % 1;
        }
        break;

    default:
        cout << "Invalid value" << endl;
    }
}