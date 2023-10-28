#include <iostream>
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
        this->left = NULL;
        this->right = NULL;
    }
};


Node *buildTree(Node *root)
{
    cout << "Enter Data  : " << endl;
    int data;
    cin >> data;
    
    if(data == -1)
    {
    	return NULL;
	}
    
    root = new Node(data);
	
    cout << "The value at the left of data ( " << data << " ) is : " << endl;
    root->left = buildTree(root->left);
    cout << "The value at the right of the data ( " << data << " ) is : " << endl;
    root->right = buildTree(root->right);

    return root;
}

void printTreeLevelWise(Node *root)
{
    /*
    this NULL will have a separate if condition in while(!q.empty()) loop where it will act as a separator
	for the inputs 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	our output was 1 3 5 7 11 17 
	but in this output the tree isn't being printed LevelWise
    */

    queue <Node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if(temp == NULL) // To check if the previous level is completed(purana level complete ho chuka hai i.e. which was inserted at Line 45)
        {
            cout << endl;
            if(!q.empty()) // queue still has child nodes
            {
                q.push(NULL); // It will act as a separator for rest of the child nodes
            }
        }
        else
        {
        	cout << temp->data << " ";
            if(temp->left) // To check if temp->left != NULL
            {
                q.push(temp->left); // Push all the left children of the node
            }
            if(temp->right) // Checking if temp->right != NULL
            {
                q.push(temp->right); // Pushed all the right children of node
            }
        }
    }
}


int main()
{
    Node *root = buildTree(root);
    //input = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Printing the tree" << endl;
    printTreeLevelWise(root);

}
