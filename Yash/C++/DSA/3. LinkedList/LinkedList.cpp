#include <iostream>
using namespace std;
#include "Node.cpp"

int main()
{
    //statically
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    n1.next = &n2;
    cout<<"N1 : "<<n1.data<<endl;
    cout<<"N2 : "<<n2.data<<endl;
    cout<< "Linked List : "<<head->data<<" "<<head->next->data; 
}