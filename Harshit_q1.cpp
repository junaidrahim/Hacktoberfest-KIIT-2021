#include<iostream>
#include<queue> //vector ka kaam bhi chalra
using namespace std;

class Node
{
    public:
    char data;
    Node* left;
    Node *right;
Node(char n)
{
    data=n;
    left=NULL;
    right=0;
}
};
// bool getpath(Node *root, int key, vector<int> &path)
// {
//     if(root ==NULL)
//         return false;
        
//     path.push_back(root->data);
//     if(root->data==key)
//         return true;
        
//     if(getpath(root->left, key, path) || getpath(root->right, key, path))
//     {
//         return true;
//     }
    
//     path.pop_back();
//     return false;
// }

Node* TreeFromArray(char arr[], Node* root, int i, int n)
{
    // Base case for recursion
    if (i < n)
    {
        if(root==NULL || root->data=='N')
            return NULL;
            
        Node* temp = new Node(arr[i]);
        root = temp;
 
        // insert left child
        root->left = TreeFromArray(arr,root->left, 2 * i + 1, n);
 
        // insert right child
        root->right = TreeFromArray(arr,root->right, 2 * i + 2, n);
    }
    return root;
}
void inorder(Node *r)
{
    if(r==NULL)// || r->data=='N')
        return;
    inorder(r->left);
    cout<<r->data<<", ";
    inorder(r->right);
}


int main()
{
    char arr[] = { '1','2','3','N','4','5','N','N','N','6'};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = TreeFromArray(arr, root, 0, n);
    inorder(root);
}
