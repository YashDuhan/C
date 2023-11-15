#include<iostream>
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
    cout<<"Enter data for node(Enter -1 to end the command) : "<<endl;
    cin>>data;
    if(data == -1)
    {
        return nullptr;
    }
    node *root = new node(data);
    cout<<"Enter data to be inserted to the left of "<<data<<" => "<<endl;
    root->left = buildBinaryTree(); 
    cout<<"Enter data to be inserted to the right of "<<data<<" => "<<endl;
    root->right = buildBinaryTree();

    return root;
}
void printTree_1(node *root) //In-order traversal
{
    if(root == nullptr)
    {
        return;
    }
    printTree_1(root->left);
    cout<<root->data<<"     ";
    printTree_1(root->right);
}
void printTree_2(node *root) //Pre-order traversal
{
    if(root == nullptr)
    {
        return;
    }
    cout<<root->data<<"     ";
    printTree_2(root->left);
    printTree_2(root->right);
}
void printTree_3(node *root) //Post-order traversal
{
    if(root == nullptr)
    {
        return;
    }
    printTree_3(root->left);
    printTree_3(root->right);
    cout<<root->data<<"     ";
}
int main()
{
    node * root = buildBinaryTree();
    cout<<endl<<endl<<"The elements of tree(In-order taversal) are: "<<endl;
    printTree_1(root);
    cout<<endl<<endl<<"The elements of tree(Pre-order taversal) are: "<<endl;
    printTree_2(root);
    cout<<endl<<endl<<"The elements of tree(Post-order taversal) are: "<<endl;
    printTree_3(root);
    return 0;
}