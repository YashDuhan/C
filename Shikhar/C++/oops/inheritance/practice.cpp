#include <iostream>
#include <math.h>
using namespace std;

/*
create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, /.
    2. ScietificCalculator - Takes input of 2 numbers using a utility function and perform any 4 scientific operation of your choice.

    Create another class HybridCalculator  and inherit it using these 2 classes:
    Q1. What  type of inheritance you are using?
    Q2. Which mode of inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator?
    Q4. How ia code reusability implemented?
*/

class SimpleCalculator
{
protected:
    int a, b, opt;

public:
    void instructions1()
    {
        cout << "Instructions for simple calculator :- " << endl;
        cout << "\t1. addition" << endl;
        cout << "\t2. subtraction" << endl;
        cout << "\t3. multiplication" << endl;
        cout << "\t4. division" << endl;
    }
    void simple(int i1, int i2)
    {
        a = i1;
        b = i2;

        switch (opt)
        {
        case 1:
        {
            cout << "Your Solution for inputs " << a << " and " << b << " is : ";
            cout << a + b << endl;
            break;
        }
        case 2:
        {
            cout << "Your Solution for inputs " << a << " and " << b << " is : ";
            cout << a - b << endl;
            break;
        }
        case 3:
        {
            cout << "Your Solution for inputs " << a << " and " << b << " is : ";
            cout << a * b << endl;
            break;
        }
        case 4:
        {
            cout << "Your Solution for inputs " << a << " and " << b << " is : ";
            cout << (float)a / b << endl;
            break;
        }
        default:
        {
            cout << "Your input is invalid!!" << endl;
        }
        }
    }
};
class ScientificCalculator
{
protected:
    int num, cal;

public:
    void insrtuctions2()
    {
        cout << "Instructions for scientific calculator :-" << endl;
        cout << "\t1. square of number" << endl;
        cout << "\t2. square root of number" << endl;
        cout << "\t3. cube of number" << endl;
        cout << "\t4. cube root of number" << endl;
    }
    void scientific(int c)
    {
        num = c;

        switch (cal)
        {
        case 1:
        {
            cout << "Your solution for input " << num << " is : ";
            cout << (num * num) << endl;
            break;
        }
        case 2:
        {
            cout << "Your solution for input " << num << " is : ";
            cout << (float)sqrt(num) << endl;
            break;
        }
        case 3:
        {
            cout << "Your solution for input " << num << " is : ";
            cout << (num * num * num) << endl;
            break;
        }
        case 4:
        {
            cout << "Your solution for input " << num << " is : ";
            cout << (float)cbrt(num) << endl;
            break;
        }
        default:
        {
            cout << "Your input is invalid!!" << endl;
        }
        }
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
protected:
    int press;

public:
    void instructions3()
    {
        cout << "Instructions for Hybrid Calculator :- " << endl;
        cout << "\t1. Simple Calculator" << endl;
        cout << "\t2. Scientific Calculator" << endl;
    }
    void hybrid(int pr)
    {
        press = pr;
        switch (press)
        {
        case 1:
        {
            instructions1();
            cout << "Enter your input = ";
            cin >> opt;
            if (opt > 4)
            {
                cout << "The input is invalid!!";
                break;
            }
            cout << "Enter your numbers a and b : ";
            cin >> a >> b;
            simple(a, b);
            break;
        }
        case 2:
        {
            insrtuctions2();
            cout << "Enter your input = ";
            cin >> cal;
            if (cal > 4)
            {
                cout << "The input is invalid!!";
                break;
            }
            cout << "Enter your number: ";
            cin >> num;
            scientific(num);
            break;
        }
        default:
        {
            cout << "Your input is invalid!!" << endl;
        }
        }
    }
};


int main()
{
    int input;
    HybridCalculator c1;
    c1.instructions3();
    cout << "Enter your input to proceed = ";
    cin >> input;
    c1.hybrid(input);
    return 0;
}