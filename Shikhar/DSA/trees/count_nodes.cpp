#include <iostream>
using namespace std;

int NodeCount = 0;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};
node *buildbinarytree()
{
    int data;
    cout << "The value to be stored in tree(Enter -1 to end the command) : ";
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    node *root = new node(data);
    NodeCount = NodeCount + 1;
    cout << endl
         << "Enter the value to be stored to the left of " << data << " => " << endl;
    root->left = buildbinarytree();
    cout << endl
         << "Enter the value o be stored to the right of " << data << " => " << endl;
    root->right = buildbinarytree();

    return root;
}

int main()
{
    node *root = buildbinarytree();
    cout << endl
         << endl
         << "No. of nodes in tree = " << NodeCount;
    return 0;
}