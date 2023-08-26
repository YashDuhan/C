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

Node *takeInput()
{
    int data;
    cout<<"Enter the elements "<<endl;
    cout<<"Enter -1 to stop entering the numbers : ";
    cin>>data;
    Node *head = nullptr;
    Node *tail = nullptr;
    while(data != -1)
    {
        Node *currentNode = new Node(data);
        if(head == nullptr)
        {
            head = currentNode;
            tail = currentNode;
        }
        else{
            tail->next = currentNode;
            tail = currentNode;
        }
        cin>>data;
    }
    return head;
}

void findIndex(Node *head , int num)
{
    Node *temp = head;
    int count = 0;
    while(temp!= nullptr)
    {
        
        if(temp->data == num)
        {
            
            cout<<"The element "<<num<<" is present at index " <<count<<endl;
            return; //to return the first occurrence
        }
        temp = temp->next;
        count++;
    }
    cout<<"The element "<<num<<" isn't present in the LinkedList";
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

int main()
{
    int num;
    Node *head = takeInput();
    printLinkedList(head);
    cout<<"Enter the num from the linkedlist : ";
    cin>>num;
    findIndex(head,num);
}