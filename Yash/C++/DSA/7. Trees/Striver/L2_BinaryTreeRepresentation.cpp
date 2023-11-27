#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }

};


int main()
{
    Node *root = new Node(1); //It's root node is 1
    root->left = new Node(2); //1's Left is 2
    root->right = new Node(3); //1's Right is 3
    root->left->left = new Node(4); //2's Left is 4
    root->left->right = new Node(5); //2's Right is 5

    //Visual Representation of above code
    /*
    .               1
    .              / \
    .             2   3
    .            / \    
    .           4   5   
    */
}