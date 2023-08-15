#include <iostream>
using namespace std;
//we need to use delete keyword to deallocate
int main()
{
    int *p = new int;
    delete p; // only going to delete the value of p from heap(dynamic memory) PS pointer is not getting deleted 

    //to deallocate the whole array
    p = new int[100];
    delete [] p;

}