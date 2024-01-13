//Diameter is the longest path between any 2 nodes
//It's not mandatory for Diameter to pass through root node
/*
.       1
.      / \
.     2   3
.    / \
.   4   5
here the counting the lines between the nodes(4 to 3)
the path is 4->2->1->3
The diameter is 3

.           1
.          / \
.         2   3
.            / \
.           4   7
.          /     \
.         5       8
.        /         \
.       6           9
the path from 6 to 9 is 
6->5->4->3->7->8->->9  (It's not passing through the root node)
After counting the line(distance) the diameter is 6


For any node the formula is 
max(DiameterOfLeft, Diameter Of Right,(LeftHeight+RightHeight));
*/

//Brute Force Soln

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
.       1
.      / \
.     2   3
.    / \
.   4   5
*/
    
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);

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
    int maxHeight = max(leftHeight,rightHeight) + 1; //including the root node

    return maxHeight;
}

int Diameter(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    int DiameterOfLeft = Diameter(root->left);
    int DiameterOfRight = Diameter(root->right);
    int totalHeight = maxDepth(root->left) +maxDepth(root->right);
    int maxiDiameter = max(totalHeight,max(DiameterOfLeft,DiameterOfRight));
    return maxiDiameter;
}

int main()
{
    Node *root = createBinaryTree();
    cout << "The Diameter of Binary Tree is " << Diameter(root) << endl;
}
