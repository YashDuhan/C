// create a function which takes two point objects and computes the distance between those points

#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int x, y;

public:
    friend void distance(point, point);
    point(int a, int b)
    {
        x = a;
        y = b;
    }
};
void distance(point o1, point o2)
{
    int a = (o1.x) - (o2.x);
    int a_sq = a * a;

    int b = (o1.y) - (o2.y);
    int b_sq = b * b;

    float dis = float(sqrt(a_sq + b_sq));
    cout << dis << " units";
}
int main()
{

    point p1(4, 5), p2(3, 4);
    cout << "The distance between the points p1(4,5) and p2(3,4) is: ";
    distance(p1, p2);

    point p3(0, 1), p4(0, 6);
    cout << endl
         << "The distance between the points p3(0,1) and p4(0,6) is: ";
    distance(p3, p4);

    point p5(1, 0), p6(70, 0);
    cout << endl
         << "The distance between the points p5(1,0) and p6(70,0) is: ";
    distance(p5, p6);
    return 0;
}