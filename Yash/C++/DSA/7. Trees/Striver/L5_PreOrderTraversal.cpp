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

Node *createBinaryTree()
{

/*
.            1
.          /   \
.         2     3
.        / \   / \ 
.       4  5  6  7
*/
    Node *root = new Node(1);           //Level 0
    root->left = new Node(2);           //Level 1
    root->right = new Node(3);          //Level 1
    root->left->left = new Node(4);     //Level 2
    root->left->right = new Node(5);    //Level 2
    root->right->left = new Node(6);    //Level 2
    root->right->right = new Node(7);   //Level 2

    return root;
}

void preOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    //using NLR
    cout << root->data << " " ;
    preOrder(root->left);    
    preOrder(root->right);
}

int main()
{
    Node *root = createBinaryTree();
    preOrder(root);
}