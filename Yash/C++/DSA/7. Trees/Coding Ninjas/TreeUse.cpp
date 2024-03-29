#include <iostream>
#include <vector>
#include "TreeNode.h"
using namespace std;

//takeInput() function of this code can cause confusion use the code written in takeInputLevelWise.cpp

TreeNode<int>* takeInput() //TakeInput with Recursion
{
    int rootData;
    cout<<"Enter data : "<<endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    
    int n;
    cout << "Enter number of children of "<<rootData <<" : "<<endl;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        TreeNode<int> * child = takeInput();
        root->children.push_back(child);
    }
    return root;

}

void printTree(TreeNode<int> *root)
{
    if(root == nullptr)
    {
        return;
    }
    //used recursion
    cout << root->data << ": ";
    for(int i = 0; i< root->children.size();i++)
    {
        cout << root->children[i]->data << " , ";
    }
    cout << endl;
    for(int i = 0; i < root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    /*
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* node1 = new TreeNode<int>(2);
    TreeNode<int>* node2 = new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    */
    TreeNode<int>*root = takeInput();
    printTree(root);


}