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
node *buildbinarytree()
{
    int data;
    cout<<"Enter the value to be stored in tree(Enter -1 to end the command) : ";
    cin>>data;
    if(data == -1)
    {
        return nullptr;
    }
    node *root = new node(data);
    cout<<endl<<"Enter the value to be stored to the left of "<<data<<" => "<<endl;
    root->left = buildbinarytree();
    
}

int main(){
    
    return 0;
}