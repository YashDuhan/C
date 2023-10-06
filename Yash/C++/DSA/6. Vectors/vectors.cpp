#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v; //static allocation
    // vector <int> *vp = new vector<int>; //dynamic allocation
    v.push_back(10); // 10
    v.push_back(20); // 10 20
    v.push_back(30); // 10 20 30
    v.push_back(40); // 10 20 30 40

    //updating the value
    v[1] = 100;

    //It will Add the element inside the Vector but wouldn't increase the size of vector automatically, the size of vector can only be used with push_back method
    //push_back first checks the size then it increase the size of vector automatically to add the element into but adding the elements directly can cause overflow error at some point
    // v[4] = 3; {It's recommended to only use Square brackets to print or update the value, but insertion can cause issues with code}


    /*
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    */

    //An alternative to above square brackets is .at() function
    //If an index is out of the range then [] square brackets will return garbage the value while accessing the element
    // but .at() will give the index out of range error; thus .at() is safer to use
    
    /*
    cout << v.at(0) << endl;
    cout << v.at(1) << endl;
    cout << v.at(2) << endl;
    cout << v.at(3) << endl;
    */
    
    //using for loop
    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }

    //Remove the last element 
    v.pop_back();


    //Size of the vector[Number of elements present inside the vector]
    cout << "Size of Vector is : "<< v.size() << endl;

    //Capacity of vector[Number of elements the vector can hold]; the capacity will get automatically increased once vector will push_back all the elements
    cout << " Current Capacity of Vector is " << v.capacity() <<endl;
}



