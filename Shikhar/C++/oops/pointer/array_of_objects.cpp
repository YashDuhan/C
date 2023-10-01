#include<iostream>
using namespace std;

class shop_Item
{
    int id;
    float price;
public:
    void set_data(int a, float b)
    {
        id = a;
        price = b;
    }
    void get_data(void)
    {
        cout<<"The id of this item is "<<id<<endl;
        cout<<"The price of this item is "<<price<<endl;
    }
};
int main()
{
    int size = 3;
    shop_Item *ptr = new shop_Item[size];

    int p;
    float q;   
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the Id and Price of item number "<<i+1<<endl;
        cin>>p>>q;
        ptr[i].set_data(p, q);
    }
    for(int j=0; j<size; j++)
    {
        cout<<endl<<"Item number = "<<j+1<<endl;
        ptr[j].get_data();
    }
    return 0;
}