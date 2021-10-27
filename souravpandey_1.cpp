#include<iostream>
#include<algorithm>
using namespace std;
// making a node with two child nodes right and left
class node
{
    public:
    int data;
    node*left;
    node*right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preorder(node*&head)
{
    if (head==NULL)
    {
        return;
    }
    cout<<head->data<<" ";
    preorder(head->left);
    preorder(head->right);
}
void inorder(node*&head)
{
    if(head==NULL)
    {
        return;
    }
    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);
}
void postorder(node*&head)
{
    if(head==NULL)
    {
        return;
    }
    inorder(head->left);
    inorder(head->right);
     cout<<head->data<<" ";
}
void sumreplace(node*root)
{
    if (root==NULL)
    {
        return;
    }
    sumreplace(root->left);
    sumreplace(root->right);
    if (root->left!=NULL)
    {
        root->data+=root->left->data;
    }
    if (root->right!=NULL)
    {
        root->data+=root->right->data;
    }
}
int main()
{
    node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}
