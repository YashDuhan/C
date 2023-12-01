//The Traversal technique for InOrder and PostOrder are Identical but it's different in PreOrder
#include <iostream>
#include <stack>
#include <vector>
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
        this->left = this->right = NULL;
    }
};

Node *createBinaryTree()
{

/*
.            1
.          /   \
.         2     3
.        / \   / \ 
.       4  5  6  7
*/
    Node *root = new Node(1);           //Level 0
    root->left = new Node(2);           //Level 1
    root->right = new Node(3);          //Level 1
    root->left->left = new Node(4);     //Level 2
    root->left->right = new Node(5);    //Level 2
    root->right->left = new Node(6);    //Level 2
    root->right->right = new Node(7);   //Level 2

    return root;
}



vector<int> inOrder(Node *root)
{
    vector<int> result;
    stack <Node *> st;
    Node *node = root; //will be using it for traversals
    while(true)
    {
        if(node != NULL) //it will be inserting all the left nodes inside it
        {
            st.push(node);
            node = node->left; //updated Node to LEFT (Based on LRN) --- L
        }
        else
        {
            if(st.empty() == true) //will be used to terminate the loop
            {
                break;
            }
            node = st.top();
            st.pop();
            result.push_back(node->data);
            node = node->right;
        }
    }
    return result;
}



int main()
{
    Node *root = createBinaryTree();
    vector<int> result = inOrder(root);

    for(int i = 0; i< result.size();i++)
    {
    	cout << result[i] << " ";
	}
}
