#include <iostream>
using namespace std;

// we need to use new keyword to allocate dynamic memory 
int main()
{
    int * p = new int;
    *p=10;
    cout << *p<<endl;

    double *pd = new double;

cout<<"Testing";
    char *c = new char;

    //Array on heap

    int * pa = new int[50];
    int n;
    cout<<"Enter elelemns "<<endl;
    cin >> n;
    int * pa2 = new int[n];
    for(int i =0; i < n; i++)
    {
        cin >> pa2[i];
    }

    int max = -1;
    for (int i =0; i<n; i++){
        if (max < pa2[i]){
            max = pa2[i];
        }
    }
cout<< max;
}