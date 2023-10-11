#include<iostream>
#include<vector>   // STL library
using namespace std;

/*
Vector :-

Vectors are sequence containers representing arrays that can change in size. These are just as efficient as arrays. But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.
*/

void display(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    int element, size;

    cout<<"Enter the size of the vector: ";
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);  //push_back() adds element at the end of the vector
    }
    display(vec1);

    vec1.pop_back();    // pop_back() deletes the last element of the vector
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();  // begin() points to the begining of the vector
    vec1.insert(iter, 2, 566);
    // insert() inserts an element in the vector
    // iter => defines the position at which element is to be inserted
    // 2 => number of times the number should be inserted
    // 566 => element to be inserted
    display(vec1);
    
    return 0;
}
// refer to cplusplus.com for detailed information