#include <iostream>
#include <vector>
#include <queue>
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


vector<vector<int> > PrintTreeLevelWise(Node *root)
{
    vector<vector<int> > ans; //will be storing my final vector
    if(root == NULL)
    {
        return ans; //to return empty vector if the root is NULL
    }
    queue<Node *> q; //will be storing the nodes level wise
    q.push(root);

    while(!q.empty())
    {
        int size = q.size(); //will be using the number of size to iterate over the queue 
        vector<int> level; //it will store all the Node data for each level

        for(int i = 0; i < size; i++)
        {
            Node * node = q.front(); //it will be used to check whether there are any other nodes left or not
            q.pop(); //popping the node on which operations are to be preformed
            if(node->left != NULL)
            {
                q.push(node->left); // to store children of the nodes
            }
            if(node->right != NULL)
            {
                q.push(node->right);
            }

            level.push_back(node->data); //store the data in a normal vector
        }
        ans.push_back(level); //this vector will store another vector
    }

    return ans;
}



int main()
{
    Node *root = createBinaryTree();
    vector<vector<int> > result = PrintTreeLevelWise(root);

    for(int i = 0; i< result.size(); i++)
    {
        for(int j = 0; j< result[i].size(); j++)
        {
            cout << result[i][j] << " " ; 
        }
        cout << endl; //to add a line break after each level
    }
}
