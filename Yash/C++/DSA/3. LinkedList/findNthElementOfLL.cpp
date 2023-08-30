#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

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

void printLinkedList(Node *head)
{
    Node *temp = head;
    while(temp!= nullptr)
    {
        cout<<temp->data<<endl;
        temp= temp->next;
    }
}

Node *findNthNode(Node* head, int pos)
{
    Node *temp = head;
    for(int i = 0; i<pos;i++)
    {
        temp = temp->next;
    }
    return temp;
}

int main()
{
    int pos;
    Node *head = createLinkedList();
    printLinkedList(head);
    cout<<"Enter the position of the element : ";
    cin>>pos;
    Node *value = findNthNode(head,pos);
    cout<<"The Node element present at the "<<pos<<" index is  "<< value->data;
}