/*
.       -10
.       / \
.      9   20
.          / \
.         15  7

Formula is 
left = max(0,maxPath(node->left,maxi)); //taken 0 to avoid getting a negative answer
right = max(0,maxPath(node->right,maxi));
maxi = max(maxi,left+right,node->val);
*/

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

Node *createTree()
{
/*
.       -10
.       / \
.      9   20
.          / \
.         15  7
*/
    Node *root = new Node(-10);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    return root;
}

int maxPathSum(Node *root,int &maxi) //the value of maxi is passed by reference to retain in memory
{
    if(root == NULL)
    {
        return 0;
    }

    int left = max(0,maxPathSum(root->left,maxi)); //0 is here to handle to ignore the negative nodes
    int right = max(0,maxPathSum(root->right,maxi));
    maxi = max(maxi,left+right,root->data);

    return max(left,right)+ root->data;
}

int maxPathSumFinal(Node *root)
{
    int maxi = INT8_MIN; //used to assign the minimum value
    maxPathSum(root,maxi);
    return maxi; //that maxi has been passed as reference so, the final value of maxi will remain in program
}

int main()
{
    Node *root = createTree();
    cout << "The maximum path sum is " << maxPathSumFinal(root);
    return 0;
}

