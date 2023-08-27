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
    Node *n4 = new Node(50);
    Node *n5 = new Node(60);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

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

Node *insertAtIndex(Node*head, int pos, int data)
{
    Node *currentNode = new Node(data);
    Node *previousNode = nullptr;
    Node *nextNode = nullptr;
    Node *temp = head;
    for(int i = 0; i<(pos-1); i++)
    {
        previousNode = temp;
        temp = temp->next;
    }
    nextNode = previousNode->next;
    previousNode->next = currentNode;
    currentNode->next = nextNode;

    return head;
}

int main()
{
    int data, pos;
    Node *head = createLinkedList();
    cout<<"Enter the data to be inserted : ";
    cin>>data;
    cout<<"\nEnter the position : ";
    cin>>pos;

    cout<<"The older LinkedList is "<<endl;
    printLinkedList(head);

    cout<<"The new LinkedList is "<<endl;
    Node *modified_LL = insertAtIndex(head,pos, data);
    printLinkedList(modified_LL);
}