#include <iostream>
using namespace std;

void addition(int x, int y)
{
	cout << x + y << " is the final result" << endl;
}

void subtraction(int x, int y)
{
	cout << x - y << " is the final result" << endl;
}

void multiply(int x, int y)
{
	cout << x * y << " is the final result" << endl;
}

void divide(int x, int y)
{
	if (y == 0)
	{
		cout << "The 2nd Number Can't be Zero" << endl;
	}
	else
	{
		cout << x / y << " is the final result" << endl;
	}
}

int main()
{
	int x, y;
	cout << "Enter 2 Numbers" << endl;
	cin >> x >> y;
	char run_again;
	cout << "Execute the Program y/n?" << endl;
	cin >> run_again;

	while (run_again == 'y' || run_again == 'Y')
	{
		int choice;
		cout << "1. Addition" << endl
			 << "2. Subtraction" << endl
			 << "3. Multiply" << endl
			 << "4. Divide" << endl;
		cout << "Enter your Choice " << endl;
		cin >> choice;
		if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
		{

			if (choice == 1)
			{
				addition(x, y);
			}

			else if (choice == 2)
			{
				subtraction(x, y);
			}

			else if (choice == 3)
			{
				multiply(x, y);
			}

			else if (choice == 4)
			{
				divide(x, y);
			}

			else
			{
				cout << "Not a Valid Choice" << endl;
			}

			cout << "Press y to Run Again!!" << endl;
			cin >> run_again;
		}
		else
		{
			run_again = 'n';
			cout << "Who're you trying to outsmart" << endl;
		}
	}

	cout << "Execution Completed !!\nHave A Nice Day " << endl;
}
