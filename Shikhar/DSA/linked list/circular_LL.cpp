#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};
Node *createCircularLL()
{
    Node *a1 = new Node(10);
    Node *a2 = new Node(20);
    Node *a3 = new Node(30);
    Node *a4 = new Node(40);
    Node *a5 = new Node(50);

    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;
    a5->next = a1;

    return a1;
}
void print(Node *head)
{
    Node *temp = head;
    do
    {
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    while(temp != head);
    cout<<endl;
}
Node *insertAtFirst(Node *head, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return newNode;
}
Node *insertAtEnd(Node *head, int data)
{
    Node *newNode = new Node(data);

    if(head == nullptr)
    {
        return newNode;
    }

    Node *temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}
void *insertAtIndex(Node *head, int index, int data)
{
    Node *newNode = new Node(data);
    Node *previousNode = nullptr;
    Node *nextNode = nullptr;
    Node *temp = head;
    for(int i=0; i<(index-1); i++)
    {
        temp = temp->next;
    }
    previousNode = temp;
    nextNode = previousNode->next;

    previousNode->next = newNode;
    newNode->next = nextNode;
}
Node *deleteAtFirst(Node *head)
{
    Node *temp = head;
    while(temp->next != head)
    {
       temp = temp->next;
    }
    temp->next = head->next;
    return head->next;
}
void deleteAtLast(Node *head)
{
    Node *temp = head;
    while(temp->next->next != head)
    {
        temp = temp->next;
    }
    temp->next = head;
}
void deleteAtIndex(Node *head, int index)
{
    Node *temp = head;
    for(int i=0; i<(index-1); i++)
    {
        temp = temp->next;
    }
    Node *previousNode = temp;
    Node *indexNode = previousNode->next;
    Node *nextNode = indexNode->next;

    indexNode = nullptr;
    previousNode->next = nextNode;
}
int main(){
    Node *head;
    // transversing circular LL
    cout<<endl<<"Your linked list after transversing : "<<endl;
    head = createCircularLL();
    print(head);

    // inserting at the beginning of the LL
    cout<<endl<<"Your linked list after inserting a node at the beginning of the linked list : "<<endl;
    head = insertAtFirst(head, 12);
    print(head);

    // inserting at the end of the LL
    cout<<endl<<"Your linked list after inserting a node at the end of the linked list : "<<endl;
    head = insertAtEnd(head, 92);
    print(head);

    // inserting in between the LL
    cout<<endl<<"Your linked list after inserting a node in between the linked list : "<<endl;
    insertAtIndex(head, 2, 44);
    print(head);

    // deleting at the beginning of the LL
    cout<<endl<<"Your linked list after deleting a node at the beginning of the linked list : "<<endl;
    head = deleteAtFirst(head);
    print(head);

    // deleteing at the end of the the LL
    cout<<endl<<"Your linked list after deleting a node at the last of the linked list : "<<endl;
    deleteAtLast(head);
    print(head);

    // deleting in between the LL
    cout<<endl<<"Your linked list after deleting a node in between the linked list : "<<endl;
    deleteAtIndex(head, 2);
    print(head);
    return 0;
}