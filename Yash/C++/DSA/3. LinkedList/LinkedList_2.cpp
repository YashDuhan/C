 #include <iostream>
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

Node* createLinkedList()
{
    Node *a1 = new Node(1);
    Node *a2 = new Node(2);
    Node *a3 = new Node(3);
    Node *a4 = new Node(4);
    Node *a5 = new Node(5);
    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;

    return a1; //returned the value for head
}

void printLinkedList(Node *head)
{
    cout<< head->data<<endl;
    cout<<head->next->data<<endl;
    cout<<head->next->next->data<<endl;
    cout<<head->next->next->next->data<<endl;
    cout<<head->next->next->next->next->data<<endl;
}

int main()
{
    Node *head = createLinkedList();
    printLinkedList(head);
}