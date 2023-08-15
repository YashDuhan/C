#include <iostream>
using namespace std;
int main()
{
	cout << "Program to find factorial" << endl;
	cout << "Enter number to calculate it's factorial" << endl;
	int x, fact;
	cin >> x;
	fact = x;
	while (x > 1)
	{
		x--;
		fact = fact * x;
	}
	cout << "Factorial is : " << fact;
	return 0;
}
