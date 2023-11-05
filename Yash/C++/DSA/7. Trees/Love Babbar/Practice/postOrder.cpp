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


void postOrder(Node *root)
{
    //base-case
    if(root == NULL)
    {
        return;
    }
    /*
    The postOrder uses the LRN Method(i.e L stands for Left; N means Nodes to printed; R means Right)
    for the tree
    .     LRN   1
    .          / \
    .     LRN 2   3 LRN
    .        /   / \
    .   LRN 4   5   6 LRN
    .          LRN   
    It's Output Should be  4 2 5 6 3 1
    Input : 1 2 4 -1 -1 -1 3 5-1 -1 6 -1 -1 
    */
    postOrder(root->left); //Signifies L in LRN
    postOrder(root->right); //Signifies R in LRN
    cout << root->data << " " ; //Signifies N in LRN
}


int main()
{
    Node *root = buildTree(root);
    cout << "The Post-Order is ";
    postOrder(root);
}
