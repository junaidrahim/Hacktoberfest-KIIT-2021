#include<iostream>
using namespace std;
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
node *BST(node*root,int val)
{
    if (root==NULL)
    {
        root=new node(val);
    }
    
    if (val<root->data)
    {
        root->left=BST(root->left,val);
    }
    else if (val>root->data)
    {
        root->right=BST(root->right,val);
    }
    return root;
}
void inorder(node*root)
{
    if (root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool search(node*root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==key)
    {
        return true;
    }
    if (key<root->data)
    {
        return search(root->left,key);
    }
    else if (key>root->data)
    {
       return search(root->right,key);
    }
    return false;
}
node*inordersucc(node*root)
{
    node*curr=root;
    while (curr&&curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
node*replace(node*root,int val)
{
    if (val<root->data)
    {
        root->left=replace(root->left,val);
    }
    else if (val>root->data)
    {
        root->right=replace(root->right,val);
    }
    else
    {
        if (root->left==NULL)
        {
            node*temp=root->right;
            free(root);
            return temp;
        }
        else if (root->right==NULL)
        {
            node*temp=root->left;
            free(root);
            return temp;
        }
        //case 3
        else
        {
            node*temp=inordersucc(root->right);
            root->data=temp->data;
            root->right=replace(root->right,temp->data);
        }
    }
    return root;
}
int main()
{
    node*root=NULL;
    root=BST(root,5);
    BST(root,1);
    BST(root,3);
    BST(root,4);
    BST(root,2);
    BST(root,7);
    inorder(root);
    cout<<endl<<search(root,4)<<endl;
    cout<<search(root,9);
    root=replace(root,5);
    cout<<endl;
    inorder(root);
    return 0;
}
