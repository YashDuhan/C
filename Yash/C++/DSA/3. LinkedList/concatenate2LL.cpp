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

Node *createLinkedList1()
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

Node *createLinkedList2()
{
    Node *n1 = new Node(50);
    Node *n2 = new Node(60);
    Node *n3 = new Node(70);
    Node *n4 = new Node(80);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    return n1;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

Node *concatenate2LL(Node *head1, Node *head2)
{
    Node *temp = head1;
    Node *lastNode = nullptr;
    while(temp->next != nullptr)
    {
        temp= temp->next;
    }
    temp->next = head2;

    return head1;
}

int main()
{
    Node *head1 = createLinkedList1();
    Node *head2 = createLinkedList2();
    cout<<"LinkedList 1 "<<endl;
    printLinkedList(head1);
    cout<<"LinkedList 2 "<<endl;
    printLinkedList(head2);
    cout<<"Concatenated List "<<endl;
    head1 =  concatenate2LL(head1,head2);
    printLinkedList(head1);
    return 0;
}