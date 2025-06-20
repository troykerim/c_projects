#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int value) {
    // Allocate memory for a new TreeNode
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    // Check if memory allocation was successful
    if (newNode != NULL) {
        // Initialize node data
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
    }

    // Return the created node
    return newNode;
}

// Function to insert a node into the binary tree
struct TreeNode* insertNode(struct TreeNode* root, int value) {
    // If the tree is empty, create a new node
    if (root == NULL) {
        return createNode(value);
    }

    // If the value is less than the root's data, insert into the left subtree
    if (value < root->data) {
        root->left = insertNode(root->left, value);
    }
    // If the value is greater than the root's data, insert into the right subtree
    else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    // Return the modified root
    return root;
}

// Function to perform in-order traversal of the binary tree
void inOrderTraversal(struct TreeNode* root) {
    // Traverse the tree in-order: left subtree, root, right subtree
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Function to free the memory allocated for the binary tree
void freeTree(struct TreeNode* root) {
    // Recursively free memory for the entire tree
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    // Initialize the root of the binary tree
    struct TreeNode* root = NULL;
    int nodeValue;
    char choice;

    // User input loop to insert nodes into the binary tree
    do {
        // Prompt user for a value to insert into the binary tree
        printf("Input a value to insert into the binary tree: ");
        scanf("%d", &nodeValue);

        // Insert the value into the binary tree
        root = insertNode(root, nodeValue);

        // Ask user if they want to insert another node
        printf("Want to insert another node? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    // Display the in-order traversal of the binary tree
    printf("\nIn-order Traversal of the Binary Tree: ");
    inOrderTraversal(root);
    printf("\n");

    // Free allocated memory for the binary tree
    freeTree(root);

    // Return 0 to indicate successful execution
    return 0;
}