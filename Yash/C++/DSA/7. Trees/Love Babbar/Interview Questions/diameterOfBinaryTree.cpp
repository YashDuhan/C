//diameter of tree = longest path between any 2 nodes 
//there can be 3 outcomes, 
//1.the left sub tree will have the longest path
/* e.g of 1

.               1
.             /  \
.            2    3
.           / \     \
.          4   5     6
.         /     \     
.        7       8
.       /         \
.      9           10
.     /             \
.   11               12
.   /
.  13


here the longest diameter is 13>11>9>7>4>2>5>8>10>12
*/

//2. The right sub tree will have the longest path
/*
.       1
.     /   \
.    3     2
.   /     / \
.  6     5   4
.       /     \
.      8       7
.      /         \
.     10          9
.      \         /
.      12      11
.             /
.           13
*/

//3. A combination of both the left and right subtree will form the longest path
/*
.               1
.              / \   
.             2   3
.            / \   \
.           4   5   6
.                    \
.                     7
*/


int height(Node *root) //it is used to find the height of each subtree separately 
{
    if(root == NULL)
    {
        return 0;
    }

    int leftHeight = height(node->left);
    int rightHeight = height(node->right);
    int maxHeight = max(leftHeight,rightHeight) + 1; // "+1" represents the current level or depth of the current node.

    return maxHeight;
}

int diameter(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    int op1 = diameter(root->left);
    int op2 = diamter(root->right);
    int op3 = height(root->left) + height(root->right);
    int maxdiameter = max(op1, max(op2,op3));

    return maxdiameter;
    
}
