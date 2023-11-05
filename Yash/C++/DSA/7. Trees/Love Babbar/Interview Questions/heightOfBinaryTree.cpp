//height = longest path between root node and leaf node
//Time Complexity = O(n)
//Space Complexity = O(height)

int maxDepth(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    int leftHeight = maxDepth(node->left);
    int rightHeight = maxDepth(node->right);
    int maxHeight = max(leftHeight,rightHeight) + 1; // "+1" represents the current level or depth of the current node.

    return maxHeight;
}