#include <iostream>
using namespace std;

int Amt;
void hundredrs()
{
    if (Amt >= 100)
    {
        cout << Amt / 100 << " 100 Notes" << endl;
        Amt = Amt % 100;
    }
}

void fiftyrs()
{
    if (Amt >= 50)
    {
        cout << Amt / 50 << " 50 Notes" << endl;
        Amt = Amt % 50;
    }
}

void twentyrs()
{
    if (Amt >= 20)
    {
        cout << Amt / 20 << " 20 Notes" << endl;
        Amt = Amt % 20;
    }
}

void oners()
{
    if (Amt >= 10)
    {
        cout << Amt / 10 << " 10 Notes" << endl;
        Amt = Amt % 10;
    }
}

int main()
{
    cout << "Enter Amount" << endl;
    cin >> Amt;
    int choice = 1;

    switch (choice)
    {
    case 1:
    {
        hundredrs();
    }
    case 2:
    {
        fiftyrs();
    }
    case 3:
    {
        twentyrs();
    }
    case 4:
    {
        oners();
        break;
    }
    default:
    {
        cout << "invalid";
    }
    }
}