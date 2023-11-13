

bool isIdentical(Node *root1, Node *root2)
{
    //base-cases

    if(root1 == NULL && root2 == NULL)
    {
        return true; //both the trees are identical
    }

    if(root1 = NULL && root2 != NULL)
    {
        return false;//both the trees aren't identical
    }

    if(root1 != NULL && root2 == NULL)
    {
        return false;
    }

    bool leftSide = isIdentical(root1->left,root2->left);
    bool rightSide = isIdentical(root1->right,root2->right);

    bool checkNode = root1->data == root2->data; 

    if(leftSide && rightSide  && checkNode)
    {
        return true;
    }
    else
    {
        return false;
    }
}