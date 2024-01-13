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
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    return root;
}

int maxDepth(Node *root)
{
    if(root == NULL)
    {
        return 0; //to return 0 if the node in NULL
    }

    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);
    int maxHeight = max(leftHeight,rightHeight) + 1; //including the root node

    return maxHeight;
}


int main()
{
    Node *root = createTree();
    cout << "The MaxDepth : " << maxDepth(root) << endl;
    return 0;
}