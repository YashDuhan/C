#include <iostream>
#include <queue>
using namespace std;

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
node *buildBinaryTree()
{
    int data;
    cout << endl
         << "Enter data to be entered(enter -1 to end the command) : ";
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    node *root = new node(data);
    cout << endl
         << "Enter the data to be entered to the left of " << data << " => ";
    root->left = buildBinaryTree();
    cout << endl
         << "Enter the data to be entered to the right of " << data << " => ";
    root->right = buildBinaryTree();

    return root;
}
void PrintTreeLevelWise(node *root)
{
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == nullptr)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(nullptr);
            }
        }
        else
        {
            cout << temp->data << "     ";
            if (temp->left != nullptr)
                q.push(temp->left);
            if (temp->right != nullptr)
                q.push(temp->right);
        }
    }
}
int main()
{
    node *root = buildBinaryTree();
    cout << endl
         << endl
         << "Printing tree level wise : " << endl;
    PrintTreeLevelWise(root);
    return 0;
}