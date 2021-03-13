#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* right;
    Node* left;
};
Node* createnode(int data)
{
    Node*temp=new Node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
void inorder(Node*root)
{
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<(*root).data<<" ";
    inorder(root->right);


}
int main()
{
    Node* root=createnode(10);
    root->left=createnode(11);
    root->left->left=createnode(13);
    root->right=createnode(9);
    root->right->left = createnode(15);
    root->right->right = createnode(8);
    inorder(root);

}
