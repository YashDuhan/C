#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;

    for(int i = 0 ; i < 100 ; i++)
    {
        cout << "Capacity : " << v.capacity() << endl; //the capacity will get doubled everytime the size == capacity
        cout << "Size : " << v.size() << endl;
        v.push_back(i+1);
    }
}