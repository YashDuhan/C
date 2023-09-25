#include <iostream>
using namespace std;

// Volume of cube
int volume(int a)
{
    return (a * a * a);
}

// Volume of cuboid
int volume(int l, int b, int h)
{
    return (l * b * h);
}

// Volume of cylinder
int volume(float r, int h)
{
    return (3.14 * r * r * h);
}
int main()
{
    int a;
    int l, b, h;
    int H;
    float r;

    cout << "Enter the value of side of a cube : " << endl;
    cin >> a;
    cout << "The volume of cube is : " << volume(a) << endl
         << endl;

    cout << "Enter the value of length, breadth and height of a cuboid : " << endl;
    cin >> l >> b >> h;
    cout << "The volume of cuboid is : " << volume(l, b, h) << endl
         << endl;

    cout << "Enter the value of radius and height of a cylinder : " << endl;
    cin >> r >> H;
    cout << "The volume of cylinder is : " << volume(r, H) << endl
         << endl;

    return 0;
}