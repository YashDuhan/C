#include<iostream>
using namespace std;

int main(){

    // Basic example
    int a = 4;
    int* p = &a;
    cout<<"The value stored in the address stored at p is "<<*(p)<<endl;

    // new keyword
    // int* n = new int(50);
    float* n = new float(50.0863);
    cout<<"The value stored in the address stored at n is "<<*(n)<<endl;

    int* arr = new int[3];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr + 1) = 20;
    arr[2] = 30;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // delete keyword
    int* new_arr = new int[3];
    new_arr[0] = 10;
    new_arr[1] = 20;
    new_arr[2] = 30;
    delete[] new_arr;
    cout<<"The value of new_arr[0] is "<<new_arr[0]<<endl;
    cout<<"The value of new_arr[1] is "<<new_arr[1]<<endl;
    cout<<"The value of new_arr[2] is "<<new_arr[2]<<endl;
    return 0;
}