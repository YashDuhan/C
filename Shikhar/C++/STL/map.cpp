#include<iostream>
#include<map>
#include<string>
using namespace std;

// map is an associative array
int main(){
    map<string, int> marksMap;
    marksMap["Shikhar"] = 100;
    marksMap["Jack"] = 98;
    marksMap["Rohan"] = 42;

    map<string, int> :: iterator itr;
    for(itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    
    return 0;
}