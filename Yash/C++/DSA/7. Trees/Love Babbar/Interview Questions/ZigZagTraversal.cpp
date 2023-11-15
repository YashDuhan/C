//This code is Incomplete

//Zig-Zag Traversal or Spiral Traversal
/*
.                       1
.                      / \
.                     2   4
.                    / \   \
.                   3   5   6
.                          / \
.                         7   8

In this binary tree we will first print the tree from left to right level wise
then we will print the tree from right to left level wise
and we will repeat the steps for all other traversals

so output will be
1 (left to right)
4 2 (right to left)
3 5 6 (left to right)
8 7 (right to left)
Answer is : 1 4 2 3 5 6 8 7 
*/

#include <iostream>
#include <queue> //we always include queue when we are required to print any tree level wise
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

//we've to return the ouput in a vector

vector <int> ZigZagTraversal(Node *root)
{
    vector <int> ans;
    if(root == NULL)
    {
        return ans;
    }

    queue <Node *> q;
    q.push(root);

    //this will determine the flow of execution
    bool leftToRight = true;

    while(!q.empty())
    {
        int size = q.size();
        vector <int> ans;

        //process each level
        for(int i = 0; i<size;i++)
        {
            Node *frontNode = q.front();
            q.pop(); //popped frontNode

            int index = leftToRight ? i :size - i;

            ans[index] = frontNode ->data;

            if()
        }
    }
    
}