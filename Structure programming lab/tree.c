#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(char data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Inorder traversal
void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%c ", root->data);
        inorderTraversal(root->right);
    }
}

// Preorder traversal
void preorderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%c ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Postorder traversal
void postorderTraversal(struct Node* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%c ", root->data);
    }
}

int main() {
    // Construct the binary tree
    struct Node* root = newNode('A');
    root->left = newNode('B');
    root->right = newNode('C');
    root->left->left = newNode('D');
    root->left->right = newNode('E');
    root->right->left = newNode('G');
    root->right->right = newNode('F');
    root->left->left->left = newNode('H');
    root->left->left->right = newNode('I');
    root->left->right->left = newNode('J');
    root->left->left->left->left = newNode('K');
    root->left->left->left->right = newNode('L');
    root->left->left->right->left = newNode('M');
    root->left->left->right->right = newNode('N');
    root->left->left->right->left->left = newNode('O');
    root->left->left->right->left->right = newNode('P');

    // Perform traversals
    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n\nPreorder Traversal: ");
    preorderTraversal(root);
    printf("\n\nPostorder Traversal: ");
    postorderTraversal(root);

    return 0;
}

