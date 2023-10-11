#include <iostream>
#include <vector>
#include<string>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1; // zero length integer vector
    vec1.push_back(5);
    display(vec1);

    vector<char> vec2(5); // 5-element char vector
    vec2.push_back('h');
    vec2.push_back('e');
    vec2.push_back('l');
    vec2.push_back('l');
    vec2.push_back('o');
    display(vec2);

    vector<char> vec3(vec2); // 5-element char vector from vec2
    display(vec3);
    
    vector<int> vec4(5, 3); // 5-element vector of 3's
    display(vec4);
    return 0;
}