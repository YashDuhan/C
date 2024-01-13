//We will be using stack to Traverse it Iteratively

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
.       4  5  6   7
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


vector<int> preOrder(Node *root)
{
    vector<int> ans; //created a vector to store the output
    if(root == NULL)
    {
        return ans;
    }

    stack <Node *> st; 
    st.push(root); //pushed the top most element int the stack

    while(!st.empty())
    {
        Node * node = st.top();
        st.pop();
        ans.push_back(node->data); //pushed the Data First( Applying  the NLR Rule) ----- N (Node Printing)
        if(node->right != NULL) 
        {
            st.push(node->right); // ------ Performed R(Right)
            /*According to the NLR rule we should have been doing Left now but we are doing Right First because
            In a stacks uses the LIFO Rule i.e. the node which will be pushed first will be executed last and the node
            which is pushed in the end will be executed first*/
        }
        if(node->left != NULL)
        {
            st.push(node->left); // ----- Performed L(left)
        }
    }
    return ans;
}


int main()
{
    Node *root = createBinaryTree();
    vector<int> result = preOrder(root);

    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}