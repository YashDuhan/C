#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
    }
};

Node *createLinkedList()
{
    Node *a1 = new Node(10);
    Node *a2 = new Node(23);
    Node *a3 = new Node(45);
    Node *a4 = new Node(76);
    Node *a5 = new Node(49);
    Node *a6 = new Node(14);

    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;
    a5->next = a6;
    a6->next = nullptr;

    return a1;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"     ";
        temp = temp->next;
    }
    cout<<endl;
}

Node *insertAtFirst(Node *head, int data)
{
    Node *newNode = new Node(data);
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
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = nullptr;
    return head;
}

Node *insertAtIndex(Node *head, int index, int data)
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

    return head;
}

Node *deleteAtFirst(Node *head)
{
    return head->next;
}

void deleteAtLast(Node *head)
{
    Node *temp = head;
    while(temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = nullptr;
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
    // transversing the linked list
    cout<<endl<<"Your linked list after transversing : "<<endl;
    Node *head = createLinkedList();
    printLinkedList(head);

    // insertion at the beginning of the linked list
    cout<<endl<<"Your linked list after inserting a node at the beginning of the linked list : "<<endl;
    head = insertAtFirst(head, 41);
    printLinkedList(head);

    // insertion at the end of the linked list
    cout<<endl<<"Your linked list after inserting a node at the end of the linked list : "<<endl;
    head = insertAtEnd(head, 39);
    printLinkedList(head);
    
    // insertion in between the linked list
    cout<<endl<<"Your linked list after inserting a node in between the linked list : "<<endl;
    head = insertAtIndex(head, 2, 22);
    printLinkedList(head);

    // deletion at the beginning of the linked list
    cout<<endl<<"Your linked list after deleting a node at the beginning of the linked list : "<<endl;
    head = deleteAtFirst(head);
    printLinkedList(head);

    // deletion at the beginning of the linked list
    cout<<endl<<"Your linked list after deleting a node at the last of the linked list : "<<endl;
    deleteAtLast(head);
    printLinkedList(head);

    // deletion in between the linked list
    cout<<endl<<"Your linked list after deleting a node in between the linked list : "<<endl;
    deleteAtIndex(head, 2);
    printLinkedList(head);
    return 0;
}