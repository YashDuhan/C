//Balanced Tree = height(left) - height(right) <= 1 [FOR ALL THE NODES]
//Time complexity is O(n^2)
//To make the complexity in O(n) we have to use pairs


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



bool isBalanced(Node *root)
{
    if(root == NULL)
    {
        return true;
    }

    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    
    bool diff = abs(height(root->left)) - abs(height(root->right)) <= 1;

    if(left && right && diff)
    {
        return true;
    }
    else
    {
        return false;
    }


}