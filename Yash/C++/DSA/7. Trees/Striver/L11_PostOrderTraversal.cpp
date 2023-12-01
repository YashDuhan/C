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

Node *createTree()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    return root;
}

vector<int> postOrder(Node *root)
{
    vector<int> result;
    stack <Node *> st;
    Node *node = root;
    while(true)
    {
        if(node != NULL)
        {
            st.push(node);
            node = node->right;
        }
        else
        {
            if(st.empty())
            {
                break;
            }
            node = st.top();
            st.pop();
            result.push_back(node->data);
            node = node->left;
        }
    }
    return result;
}


int main()
{
    Node *root = createTree();
    vector<int> result = postOrder(root);

    for(int i = 0; i< result.size();i++)
    {
        cout << result[i] << " ";
    }
}