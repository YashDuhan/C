#include <iostream>
#include "TreeNode.h"
#include <vector>
#include <queue>
using namespace std;

TreeNode <int>* takeInput()
{
    int rootData;
    cout<<"Enter root data : "<<endl;
    cin >> rootData;
    TreeNode <int>* root = new TreeNode<int>(rootData);
    queue <TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0)
    {
        TreeNode <int> * front = pendingNodes.front(); //top most element of the queue is the front
        pendingNodes.pop();
        int numOfChild;
        cout<<"Enter the number of children "<< front->data << " has : " << endl;
        cin >>numOfChild;
        for(int i = 0; i<numOfChild;i++)
        {
            int childData;
            cout <<"Enter the child data of "<< i << " th child : "<< endl;
            cin >> childData;
            TreeNode <int> * child = new TreeNode<int>(childData);
            front->children.push_back(child); //Added the child into the vector
            pendingNodes.push(child); //Added the child into the queue; to run the same operation on it's childs
        }
    }
    return root;
}


void printTreeNode(TreeNode<int> *root)
{
    if (root == nullptr) //checking if the root node isn't null
    {
        return;
    }
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front(); //to change the make the front out first node
        pendingNodes.pop(); //to change the front on every execution

        cout << front->data << ":";

        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data<< ",";
            pendingNodes.push(front->children[i]); //pushed all the nodes children vector has
        }
        cout << endl;
    }
}

int main()
{
    TreeNode<int> * root = takeInput();
    printTreeNode(root);

}


/*
    For the 
    Sample Input 1:
    10 3 20 30 40 2 40 50 0 0 0 0

    Sample Output 1:
    10:20,30,40,
    20:40,50,
    30:
    40:
    40:
    50:


*/