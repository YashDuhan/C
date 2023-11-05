#include <iostream>
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

Node *buildTree(Node *root)
{
    cout << "Enter data for node : " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1)
    {
        return NULL; //if the user entered -1 as the data then the function will end automatically
    }

    cout << "Enter data to be inserted in left of : " << data <<  endl;
    root->left = buildTree(root->left); //Recursion is being used here
    cout <<"Enter data to be inserted in right  of : " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

int main()
{
    Node *root = NULL;
    buildTree(root);
}
