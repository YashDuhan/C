//For every Node(except leaf nodes)
//The Node = sumOf(left) + sumOf(right)
/*
.           20
.          / \
.         3   2
.        / \   \
.       5  4    6
 
In this case the sum of left subtree for Node 20 is 12 
and sum of right Subtree for Node 20 is 8
Now,
currentNode = sumOfleftSubtree + sumOfrightSubtree 
20 = 12+8

but this conditions fails at other nodes
thus it isn't a sum tree
*/

pair<bool,int> isSumTree(Node* root)
{
    //base-case
    if(root == NULL)
    {
        pair<bool,int> p = make_pair(true,0);
        return p;
    }
    //base-case for leafnodes
    if(root->left == NULL && root->right == NULL)
    {
        pair<bool,int> p = make_pair(true,root->data);
        return p;
    }

    pair<bool,int> left = isSumTree(root->left);
    pair<bool,int> right = isSumTree(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;
    bool checkSum = root->data == left.second + right.second;

    pair<bool,int> ans;
    
    if(leftAns && rightAns && checkSum)
    {
        ans.first = true;
        ans.second = root->data + left.second+right.second;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}