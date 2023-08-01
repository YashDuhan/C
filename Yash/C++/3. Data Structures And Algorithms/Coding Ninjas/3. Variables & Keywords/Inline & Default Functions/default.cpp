#include <iostream>
using namespace std;

int sum(int a[], int size, int si = 0 /*default value*/)
{
        int ans=0;
        for (int i=si; i<size; i++)
        {
                ans+=a[i];
        }
        return ans;
}

int main()
{
        int a[20];

        cout<< sum(a,20)<<endl;
}
