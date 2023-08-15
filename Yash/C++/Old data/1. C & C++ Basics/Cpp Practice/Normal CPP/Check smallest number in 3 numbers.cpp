#include <iostream>
using namespace std;
int main()
{
								cout << "To check smallest of 3 numbers" << endl;
								cout << "Enter 3 numbers" << endl;
								int a, b, c;
								cin >> a >> b >> c;
								if (a < b)
								{
																//a is smaller than b
																if (a < c)
																{
																								//a is smallest
																								cout << "Smallest number is " << a << endl;
																}
																else if (c < a)
																{
																								//c is smallest
																								cout << "Smallest number is " << c << endl;
																}
								}
								else if (b < a)
								{
																//b is smaller than a
																if(b < c)
																{
																								//b is smallest
																								cout << "Smallest number is " << b << endl;
																}
																else if (c < b)
																{
																								//c is smallest
																								cout << "Smallest number is " << c << endl;
																}
								}

								return 0;
}
