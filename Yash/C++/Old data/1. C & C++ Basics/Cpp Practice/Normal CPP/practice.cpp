#include <iostream>
using namespace std;

int main()
{
        int num;
        cout << "Enter a number" << endl;
        cin >> num;
        cout << (num * num) << " is the square of " << num << endl;
}
/*
   int main()
   {
    // square via number
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    //cout << "The square of that number is " << (num * num) << endl;
    int square = num * num;
    cout << "square is " << square << endl;
   }
 */

/*
   int main()
   {
    //square via pointers
    int num;
    cout << "Enter a number " << endl;
    cin >> num;
    int sum;
    int *p = &num;
    sum = (*p) * (*p);
    cout << sum;
   }
 */

/*
   //Square using functions
   int num; //global variable

   void square()
   {
    cout << num*num;
   }

   int main()
   {
    cout << "Enter a number" << endl;
    cin >> num;
    cout << "The Square is ";
    square();
   }
 */
