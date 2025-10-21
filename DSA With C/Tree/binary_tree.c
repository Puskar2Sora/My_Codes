#include <stdio.h>
#include<stdlib.h>
typedef struct Node // Structure for a binary tree node
{
    int data;
    struct Node *left, *right;
}Nd;
void inorderTraversal(Nd* root) // Inorder traversal (Left -> Root -> Right)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}
void preorderTraversal(Nd* root) // Preorder traversal (Root -> Left -> Right)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void postorderTraversal(Nd* root) // Postorder traversal (Left -> Right -> Root)
{
    if (root == NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}
Nd* buildTree() 
{
    int value;
    printf("Enter node value (-1 for NULL): ");
    scanf("%d", &value);
    if (value == -1)  // If user enters -1, return NULL (no child)
        return NULL;
    Nd* newNode = (Nd*)malloc(sizeof(Nd));
    newNode->data = value;
    //newNode->left = newNode->right = NULL;
    printf("Enter left child of %d:\n", value);
    newNode->left = buildTree();  // Recursively build left subtree
    printf("Enter right child of %d:\n", value);
    newNode->right = buildTree(); // Recursively build right subtree
    return newNode;
}
void main() 
{
    printf("Build your binary tree:\n");
    Nd* root = buildTree();  // Build the tree
    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\nPreorder Traversal: ");
    preorderTraversal(root);
    printf("\nPostorder Traversal: ");
    postorderTraversal(root);
    printf("\n");
}