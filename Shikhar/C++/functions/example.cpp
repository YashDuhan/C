#include <iostream>
using namespace std;

float moneyRecieved(int money, float factor = 1.04)
{
    return money * factor;
}
int main()
{
    int money;
    cout << "Enter your amount : " << endl;
    cin >> money;

    cout << "If you have " << money << " Rs in your account, you will be having " << moneyRecieved(money) << " Rs after 1 year" << endl;
    cout << "For VIP : If you have " << money << " Rs in your account, you will be having " << moneyRecieved(money, 1.1) << " Rs after 1 year" << endl;

    return 0;
}