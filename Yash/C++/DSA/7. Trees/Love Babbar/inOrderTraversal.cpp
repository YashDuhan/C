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


void inOrder(Node *root)
{
    //base-case
    if(root == NULL)
    {
        return;
    }
    /*
    The inOrder uses the LNR Method(i.e L stands for Left; N means Nodes to printed; R means Right)
    for the tree
    .     LNR   1
    .          / \
    .     LNR 2   3 LNR
    .        /   / \
    .   LNR 4   5   6 LNR
    .          LNR   
    It's Output Should be  4 2 1 5 3 6
    */
    inOrder(root->left); //Signifies L in LNR
    cout << root->data << " " ; //Signifies N in LNR
    inOrder(root->right); //Signifies R in LNR
}


int main()
{
    Node *root = buildTree(root);
    cout << "The In-Order is ";
    inOrder(root);
}
