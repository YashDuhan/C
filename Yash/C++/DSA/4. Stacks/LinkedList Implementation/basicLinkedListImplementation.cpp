#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next= nullptr;
    }
};

class Stack
{
    private:
    Node *head = nullptr;
    public:
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
    }
    void display()
    {
        Node *temp = head;
        while(temp != nullptr)
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

};

int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    s1.display();
}