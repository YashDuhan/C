//using pairs 

pair <bool,int> isBalancedFast(Node *root)//bool is to check whether it's balanced or not and int is to check the height
{
    if(root == NULL)
    {
        pair <bool,int> p = make_pair(true,0);
        return p;
    }

    pair<int,int> left = isBlanaced(root->left);
    pair<int,int> right = isBlanaced(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;
    bool diffAns = abs(left.second - right.second) <= 1;


    pair <bool,int> ans;
    ans.second = max(left.second,right.second) +1;

    if(leftAns && rightAns && diffAns)
    {
        ans.first = true;
    }
    else
    {
        ans.first =  false;
    }

    return ans;
    
}