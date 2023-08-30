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
        temp = temp->next;
    }
}

Node *middleElement(Node *head)
{
    Node* temp = head;
    Node *midPoint = head;
    int ptr = 0;
    while(temp != nullptr )
    {
        temp=temp->next;
        ptr++;
    }
    int midpoint = ptr/2;
    
    for(int i = 0; i<midpoint;i++)
    {
        midPoint = midPoint->next;
    }
    return midPoint;
}

int main()
{
    Node *head = createLinkedList();
    printLinkedList(head);
    Node* main_middleElement = middleElement(head);
    cout<<"The middle element is : "<<main_middleElement->data<<endl;
    return 0;
}