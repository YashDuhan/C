#include<iostream>
using namespace std;

class point
{
    int x,y;
    public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout<<"The point is: ("<<x<<", "<<y<<")"<<endl;
    }
};
int main(){
    point p(1,4);
    p.displayPoint();

    point q(5,8);
    q.displayPoint();

    return 0;
}