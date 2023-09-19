#include <stdio.h>
#include <stdlib.h>

// Define the structure for a BST node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new BST node
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new element into the BST
struct TreeNode* insert(struct TreeNode* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to search for an element in the BST
struct TreeNode* search(struct TreeNode* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return search(root->left, key);
    }

    return search(root->right, key);
}

// Function to perform an in-order traversal of the BST
void inorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Function to create a deep copy of a binary tree
struct TreeNode* copyTree(struct TreeNode* root) {
    if (root == NULL) {
        return NULL;
    }

    struct TreeNode* newNode = createNode(root->data);
    newNode->left = copyTree(root->left);
    newNode->right = copyTree(root->right);

    return newNode;
}

int main() {
    struct TreeNode* root = NULL;
    struct TreeNode* copy = NULL;
    int choice, value, key;
    int num_elements, element;

    printf("Enter the number of elements for the BST: ");
    scanf("%d", &num_elements);

    printf("Enter %d elements to build the BST:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        scanf("%d", &element);
        root = insert(root, element);
    }

    while (1) {
        printf("\nBinary Search Tree Menu:\n");
        printf("1. Insert Element\n");
        printf("2. In-order Traversal\n");
        printf("3. Search Element\n");
        printf("4. Copy Tree\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;
            case 2:
                printf("In-order traversal of the BST: ");
                inorderTraversal(root);
                printf("\n");
                break;
            case 3:
                printf("Enter a value to search in the BST: ");
                scanf("%d", &key);
                if (search(root, key) != NULL) {
                    printf("%d found in the BST.\n", key);
                } else {
                    printf("%d not found in the BST.\n", key);
                }
                break;
            case 4:
                copy = copyTree(root);
                printf("In-order traversal of the copied BST: ");
                inorderTraversal(copy);
                printf("\n");
                break;
            case 5:
                // Clean up and exit
                free(root);
                free(copy);
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
