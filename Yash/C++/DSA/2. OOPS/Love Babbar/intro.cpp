#include <iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    void print()
    {
        cout<<level<<endl;
    }
};

int main()
{
    Hero ramesh;
    ramesh.health = 70;
    ramesh.level = 'A';
    cout<<"Health is "<<ramesh.health<<endl;
    cout<<"Level is "<<ramesh.level<<endl;

    //cout<<"Size : "<<sizeof(h1);

    return 0;
}