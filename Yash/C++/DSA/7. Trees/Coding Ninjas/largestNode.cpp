#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class TreeNode
{
    public:
    int data;
    vector <TreeNode *> children;

    TreeNode(int data)
    {
        this->data = data;
    }
};

TreeNode * takeInput()
{
    int rootData;
    cout << "Enter the root data : " << endl;
    cin >> rootData;
    TreeNode *root = new TreeNode(rootData);
     

     //queue to store Nodes
     queue <TreeNode *> pendingNodes;
     pendingNodes.push(root);

    while (!pendingNodes.empty())
    {
        TreeNode *front = pendingNodes.front();
        pendingNodes.pop(); //removed the front after storing it into *front
        cout << "Enter the number of children " << front->data << " has : " << endl;
        int numChild;
        cin >> numChild;

        for(int i = 0; i < numChild; i++)
        {
            cout << "Enter the data for " << i << " th child : " << endl;
            int childData;
            cin >> childData;
            TreeNode* child = new TreeNode(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue <TreeNode *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        TreeNode *front = pendingNodes.front();
        pendingNodes.pop();

        cout << front->data << " :";

        for(int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data << " ," ;
            pendingNodes.push(front->children[i]);
        }
        cout << endl;
    }    
}

int LargestNode(TreeNode * root)
{
    int largestNode = root->data;

    for(int i = 0; i< root->children.size(); i++)
    {
        int pendingNodes = LargestNode(root->children[i]);
        largestNode = max(largestNode,pendingNodes);
    }
    return largestNode;
}

int main()
{
    TreeNode* root = takeInput();
    cout << "LargestNode : " << LargestNode(root) << endl;
    printTree(root);
}