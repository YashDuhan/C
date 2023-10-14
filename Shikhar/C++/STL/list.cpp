#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(1);
    list1.push_back(12);

    display(list1);

    list1.pop_back();   // it removes the last element of the list entered
    list1.pop_front();  // it removes the first element of the list
    display(list1);

    list1.remove(9);    // it removes the specific element from the list
    display(list1);

    list<int> list2(5); // empty list of size 5
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 52;
    iter++;
    *iter = 4;
    iter++;
    *iter = 9;
    iter++;
    *iter = 28;
    iter++;

    display(list2);

    list2.sort(); // it sorts the list elements in ascending order
    display(list2);

    list1.merge(list2);
    cout<<"List1 after merging: ";
    display(list1);

    list1.sort();   // if both the list are sorted then the merged list will be sorted automatically
    cout<<"New merged and sorted list1: ";
    display(list1);

    list1.reverse();    // it reverses the order of the list
    cout<<"Reversed list1: ";
    display(list1);
    
    return 0;
}