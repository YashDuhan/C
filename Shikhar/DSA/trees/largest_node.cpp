#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;
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
    cout << "The the value to be stored in tree(Enter -1 to end the command) : ";
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    node *root = new node(data);
    cout << endl
         << "Enter the value to be entered to the left of " << data << " => " << endl;
    root->left = buildbinarytree();
    cout << endl
         << "Enter the value to be entered to the right of " << data << " => " << endl;
    root->right = buildbinarytree();

    return root;
}
int largestNode(node *root)
{
    int largestNode = 0;
    queue<node *> q;
    queue<int> Treedata;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == nullptr)
        {
            return -1;
        }
        else
        {
            Treedata.push(temp->data);
            if (temp->left != nullptr)
                q.push(temp->left);
            if (temp->right != nullptr)
                q.push(temp->right);
        }
    }
    while (!Treedata.empty())
    {
        if (Treedata.front() > largestNode)
        {
            largestNode = Treedata.front();
        }
        Treedata.pop();
    }
    return largestNode;
}
int main()
{
    node *root = buildbinarytree();
    int largeNode = largestNode(root);
    cout << endl
         << endl
         << "The largest value of tree is(-1 indicates empty tree) : " << largeNode;
    return 0;
}