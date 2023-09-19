# Binary Search Tree (BST) Operations

This documentation provides an overview of the C code for performing various operations on a Binary Search Tree (BST). The code includes functions for creating, inserting, searching, copying, and performing an in-order traversal of the BST. Additionally, it offers a menu-driven interface for interacting with the BST.

## Table of Contents

1. [Introduction](#introduction)
2. [BST Node Structure](#bst-node-structure)
3. [Functions](#functions)
    - [createNode](#createNode)
    - [insert](#insert)
    - [search](#search)
    - [inorderTraversal](#inorderTraversal)
    - [copyTree](#copyTree)
4. [Main Function](#main-function)
5. [Usage](#usage)
6. [Sample Input and Output](#sample-input-and-output)
7. [License](#license)

---

## Introduction<a name="introduction"></a>

Binary Search Tree (BST) is a data structure that allows efficient insertion, deletion, and search operations on a sorted set of data. This C code provides a set of functions and a menu-driven interface for performing these operations on a BST.

## BST Node Structure<a name="bst-node-structure"></a>

The `struct TreeNode` structure represents a node in the BST. It contains the following fields:

- `int data`: The data value stored in the node.
- `struct TreeNode* left`: A pointer to the left child of the node.
- `struct TreeNode* right`: A pointer to the right child of the node.

## Functions<a name="functions"></a>

### createNode<a name="createNode"></a>

```c
struct TreeNode* createNode(int data);
```

- **Description**: Creates and initializes a new BST node with the given data value.
- **Parameters**:
    - `int data`: The data value to be stored in the new node.
- **Returns**:
    - A pointer to the newly created node.

### insert<a name="insert"></a>

```c
struct TreeNode* insert(struct TreeNode* root, int data);
```

- **Description**: Inserts a new element with the given data value into the BST.
- **Parameters**:
    - `struct TreeNode* root`: A pointer to the root of the BST.
    - `int data`: The data value to be inserted.
- **Returns**:
    - A pointer to the modified BST after insertion.

### search<a name="search"></a>

```c
struct TreeNode* search(struct TreeNode* root, int key);
```

- **Description**: Searches for an element with the given key in the BST.
- **Parameters**:
    - `struct TreeNode* root`: A pointer to the root of the BST.
    - `int key`: The value to be searched for.
- **Returns**:
    - A pointer to the node containing the key if found; otherwise, `NULL`.

### inorderTraversal<a name="inorderTraversal"></a>

```c
void inorderTraversal(struct TreeNode* root);
```

- **Description**: Performs an in-order traversal of the BST and prints the elements in sorted order.
- **Parameters**:
    - `struct TreeNode* root`: A pointer to the root of the BST.

### copyTree<a name="copyTree"></a>

```c
struct TreeNode* copyTree(struct TreeNode* root);
```

- **Description**: Creates a deep copy of the given BST.
- **Parameters**:
    - `struct TreeNode* root`: A pointer to the root of the BST to be copied.
- **Returns**:
    - A pointer to the root of the copied BST.

## Main Function<a name="main-function"></a>

The `main` function provides a menu-driven interface for interacting with the BST. It allows users to insert elements, perform in-order traversal, search for elements, create a copy of the tree, and exit the program gracefully.

## Usage<a name="usage"></a>

To use this code, follow these steps:

1. Compile the code using a C compiler (e.g., GCC):
   ```
   gcc binary_search_tree.c -o binary_search_tree
   ```

2. Run the compiled program:
   ```
   ./binary_search_tree
   ```

3. Follow the on-screen menu instructions to perform various BST operations.

## Sample Input and Output<a name="sample-input-and-output"></a>

Here is an example of how to interact with the program:

```
Enter the number of elements for the BST: 5
Enter 5 elements to build the BST:
10 5 20 3 7

Binary Search Tree Menu:
1. Insert Element
2. In-order Traversal
3. Search Element
4. Copy Tree
5. Exit
Enter your choice: 2

In-order traversal of the BST: 3 5 7 10 20

Binary Search Tree Menu:
1. Insert Element
2. In-order Traversal
3. Search Element
4. Copy Tree
5. Exit
Enter your choice: 3

Enter a value to search in the BST: 5
5 found in the BST.

Binary Search Tree Menu:
1. Insert Element
2. In-order Traversal
3. Search Element
4. Copy Tree
5. Exit
Enter your choice: 4

In-order traversal of the copied BST: 3 5 7 10 20

Binary Search Tree Menu:
1. Insert Element
2. In-order Traversal
3. Search Element
4. Copy Tree
5. Exit
Enter your choice: 5

```

## License<a name="license"></a>

This code is provided under the [MIT License](LICENSE). Feel free to use, modify, and distribute it according to the terms of the license.
