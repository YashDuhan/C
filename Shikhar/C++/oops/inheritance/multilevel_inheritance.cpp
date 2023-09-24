#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}
void student ::get_roll_number()
{
    cout << "The roll number is : " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void exam ::get_marks()
{
    cout << "The marks obtained in maths is " << maths << endl;
    cout << "The marks obtained in physics is " << physics << endl;
}

class result : public exam
{
public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Total percentage of student is : " << (maths + physics) / 2 << " %" << endl;
    }
};
int main()
{
    /*
    notes:-
        If we are inheriting B from A and C from B: [ A--->B--->C ]
        1. A is the base class for B and B is the base class for C
        2. A-->B-->C is called inheritance path

    */
    result harry;
    harry.set_roll_number(4321);
    harry.set_marks(90.5, 92.5);
    harry.display_result();
    return 0;
}