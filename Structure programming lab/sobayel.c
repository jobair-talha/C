#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    char val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(char key) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = key;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* constructBinaryTree() {
    struct TreeNode* root = createNode('A');
    root->left = createNode('B');
    root->right = createNode('C');

    root->left->left = createNode('D');
    root->left->right = createNode('E');

    root->right->left = createNode('G');
    root->right->right = createNode('F');

    root->left->left->left = createNode('H');
    root->left->left->right = createNode('I');

    root->left->right->left = createNode('J');

    root->right->left->left = createNode('K');
    root->right->left->right = createNode('L');

    root->right->right->left = createNode('M');
    root->right->right->right = createNode('N');

    root->left->left->left->left = createNode('O');
    root->left->left->left->right = createNode('P');

    return root;
}

void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%c ", root->val);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        printf("%c ", root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%c ", root->val);
    }
}

int main() {
    struct TreeNode* rootNode = constructBinaryTree();

    printf("Inorder Traversal: ");
    inorderTraversal(rootNode);

    printf("\nPreorder Traversal: ");
    preorderTraversal(rootNode);

    printf("\nPostorder Traversal: ");
    postorderTraversal(rootNode);

    return 0;
}

