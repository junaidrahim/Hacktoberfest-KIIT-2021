#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* insert(struct node* root, int val) {
    if (root == NULL) {
        struct node* newNode = (struct node*) malloc (sizeof(struct node));
        newNode->data = val;
        newNode->left = NULL;
        newNode->left = NULL;
        return newNode;
    } else if (val > root->data) {
        root->right = insert (root->right, val);
    } else {
        root->left = insert (root->left, val);
    }
    return root;
}

void inorder(struct node* root) {
    if (!root) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void secondMin(struct node* root) {
    struct node* temp = root;
    struct node* prev;
    while (temp->left != NULL) {
        prev = temp;
        temp = temp->left;
    }
    printf("Second minimum element in BST: %d\n", prev->data);
}

int main() {
    struct node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 2);
    root = insert(root, 9);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 3);
    root = insert(root, 1);

    secondMin(root);
}
