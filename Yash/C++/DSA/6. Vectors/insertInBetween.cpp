#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = {1,2,3,4,5};
    int pos = 3;
    int data = 20;
    v.insert(v.begin()+pos,data);

    for(int i = 0; i<v.size(); i++)
    {
        cout << v.at(i) <<endl;
    }

}