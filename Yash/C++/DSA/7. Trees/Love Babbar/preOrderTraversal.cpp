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
        this->left = NULL;
        this->right = NULL;
    }
};

Node * buildTree(Node *root)
{
    int data;
    cout << "Enter data : " << endl;
    cin >> data;

    if(data == -1)
    {
        return NULL;
    }
    
    root = new Node(data);

    cout << "Enter the element to be inserted at the left side of the " << data << ": " << endl;
    root->left = buildTree(root->left);
    cout << "Enter the element to be inserted at the right of the " << data << " : " << endl;
    root->right = buildTree(root->right);

    return root;
}


void preOrder(Node *root)
{
    //base-case
    if(root == NULL)
    {
        return;
    }
    /*
    The preOrder uses the NLR Method(i.e L stands for Left; N means Nodes to printed; R means Right)
    for the tree
    .     NLR   1
    .          / \
    .     NLR 2   3 NLR
    .        /   / \
    .   NLR 4   5   6 NLR
    .          NLR   
    It's Output Should be  1 2 4 3 5 6
    Input : 1 2 4 -1 -1 -1 3 5-1 -1 6 -1 -1 
    */
    cout << root->data << " " ; //Signifies N in NLR
    preOrder(root->left); //Signifies L in NLR
    preOrder(root->right); //Signifies R in NLR
}


int main()
{
    Node *root = buildTree(root);
    cout << "The Pre-Order is ";
    preOrder(root);
}
