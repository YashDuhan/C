#include <iostream>
#include <math.h>
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

Node * createBinaryTree()
{
/*
.       1       //Level 0
.      / \
.     2   3     //Level 1
.    /\    \
.   4  5    6   //Level 2
.  /\        
. 7  8          //Level 3
*/
    Node *root = new Node(1);               //Level 0
    root->left = new Node(2);               //Level 1
    root->right = new Node(3);              //Level 1
    root->left->left = new Node(4);         //Level 2
    root->left->right = new Node(5);        //Level 2
    root->right->right = new Node(6);       //Level 2
    root->left->left->left = new Node(7);   //Level 3
    root->left->left->right = new Node(8);  //Level 3

    return root;
}

int maxDepth(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);
    int maxHeight = max(leftHeight, rightHeight) + 1;

    return maxHeight;
}

bool checkBalanced(Node *root)
{
    if(root == NULL)
    {
        return true;
    }

    bool leftSubTree = checkBalanced(root->left);
    bool rightSubTree = checkBalanced(root->right);

    bool diff = abs(maxDepth(root->left) - maxDepth(root->right)) <= 1;

    if(leftSubTree && rightSubTree && diff)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *root = createBinaryTree();
    if(checkBalanced(root))
    {
        cout << "The Tree is Balanced" << endl;
    }
    else
    {
        cout << "The Tree isn't balanced" << endl;
    }
}
