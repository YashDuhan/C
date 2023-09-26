#include <iostream>
using namespace std;

// virtual base class is used to prevent ambiguity of data members during inheritance

/*  example:-

                  |---> test class -----|
student class --->                      ---> result class
                  |---> sports class ---|
*/
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll number is " << roll_no;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};
class sports : public virtual student
{
protected:
    int score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "your PT score is " << score << endl;
    }
};
class result: public test, public sports
{
private: 
    float total;
public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;
    }
};
int main()
{
    result harry;
    harry.set_number(223043);
    harry.set_marks(89.5, 93.5);
    harry.set_score(9);
    harry.display();
    return 0;
}