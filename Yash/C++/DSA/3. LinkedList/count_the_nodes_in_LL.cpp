#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

Node *createLinkedList()
{
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    return n1;
}

int countLinkedList(Node *head)
{
    Node *temp = head;
    int count = 0;

    while(temp != nullptr)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int main()
{
    Node *head = createLinkedList();
    cout<<"The size of LinkedList is : "<<countLinkedList(head)<<endl;
}