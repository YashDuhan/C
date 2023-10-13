#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class TreeNode 
{
    public:
    int data;
    vector <TreeNode*> children;
    TreeNode(int data)
    {
        this->data = data;
    }
};


TreeNode *takeInput()
{
    int rootData;
    cout << "Enter Root Data : " << endl;
    cin >> rootData;

    TreeNode *root = new TreeNode(rootData);
    queue <TreeNode *> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty())
    {
        TreeNode* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter the number of children " << front->data << " has :" << endl;
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++)
        {
            cout << "Enter the data for " << i << " th Node : " << endl;
            int childData;
            cin >> childData;
            TreeNode *child = new TreeNode(childData);
            pendingNodes.push(child);
            front->children.push_back(child);
        }
    }
    return root;
}


void printTree(TreeNode * root)
{
    if(root == nullptr)
    {
        return;
    }

    cout << root->data << " ; ";
    for(int i = 0; i< root->children.size(); i++)
    {
        cout << root->children[i]->data << " , ";
    }
    cout << endl;
    for(int i = 0; i<root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int Height(TreeNode *root)
{
    if(root == nullptr)
    {
        return -1;
    }
    int maxHeight = 0;
    for(int i = 0; i<root->children.size(); i++)
    {
        int childHeight = Height(root->children[i]);
        maxHeight = max(maxHeight,childHeight);
    }
    return maxHeight+1; //including root node
}

int main()
{
    TreeNode *root = takeInput();
    printTree(root);
    cout << "The height of the Tree is : " << Height(root) << endl;
}