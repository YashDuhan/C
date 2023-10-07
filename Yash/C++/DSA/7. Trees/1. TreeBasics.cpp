#include <iostream>
#include <vector>
using namespace std;

//in trees each vectornode has separate vector node inside it
//e.g assume this a vector {1:{4:{},5:{1:{2:{}}}}, 2:{}, 3:{},} 
//each vector is having a separate vector inside it

class TreeNode 
{
    public:
    int data;
    vector <TreeNode *> children; //created a vector of children type

    //constructor to directly add values
    TreeNode(int data)
    {
        this->data = data;
    }
};

int main()
{
    TreeNode* root = new TreeNode(100);
    TreeNode* node1 = new TreeNode(20);
    TreeNode* node2 = new TreeNode(30);
    root->children.push_back(node1);
    root->children.push_back(node2);
    
    TreeNode* node3 = new TreeNode(21);
    TreeNode* node4 = new TreeNode(22);
    node1->children.push_back(node3);
    node1->children.push_back(node4);

    TreeNode* node5 = new TreeNode(31);
    TreeNode* node6 = new TreeNode(32);
    node2->children.push_back(node5);
    node2->children.push_back(node6);


    /*
    Here this Tree will look something like {100:{20{21:{},22:{}}:,30:{31:{},32:{}}}}
        
        OR
      
        {
            100:
                {
                    20:
                        {21:{},22:{}},
            
                    30:
                        {31:{},32:{}}
                }
        }


    .                         Visual Representation of this Tree

    .                                   100(root)
    .                                 /          \
    .                                /            \
    .                               /              \
    .                              /                \
    .                         20(node1)          30(node2)
    .                            /   \            /   \
    .                           /     \          /     \
    .                          /       \        /       \
    .                  21(node3) 22(node4) 31(node5) 32(node6)
    */

}