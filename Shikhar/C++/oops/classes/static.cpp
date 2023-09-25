#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the ID " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The ID of this employee is " << id << " and this is employee no " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};
int employee ::count; // default value is 0
int main()
{
    employee harry, rohan, ansh;
    harry.setData();
    harry.getData();
    employee::getCount();

    rohan.setData();
    rohan.getData();
    employee::getCount();

    ansh.setData();
    ansh.getData();
    employee::getCount();
    return 0;
}