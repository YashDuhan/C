
int height(Node *root) 
{
    if(root == NULL)
    {
        return 0;
    }

    int leftHeight = height(node->left);
    int rightHeight = height(node->right);
    int maxHeight = max(leftHeight,rightHeight) + 1;

    return maxHeight;
}

pair <int,int> diameterOfBT(Node *root) //first is storing the diameter and second is storing the height
{
    if(root = NULL)
    {
        pair<int,int> p = make_pair(0,0); //made a pair 'p' with values 0 and 0
        return p;
    }

    pair<int,int> left = diameterOfBT(root->left);
    pair<int,int> right = diamteterOfBT(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second+right.second+1;

    pair<int,int> ans;

    ans.first = max(op1,max(op2,op3));
    ans.second = max(left.second,right.second)+1;

    return ans;
}