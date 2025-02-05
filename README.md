# 0x1D. C - Binary trees

## Learning Objectives
**General**
* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Print function
To match the examples in the tasks, you are given this [function](https://github.com/holbertonschool/0x1C.c)

![Types of Binary Tree](https://github.com/Matteo-lu/binary_trees/blob/main/img/binary_tree.png)
## Tasks
**[0. New node:](https://github.com/Matteo-lu/binary_trees/blob/main/0-binary_tree_node.c)**
Write a function that creates a binary tree node

* Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
* Where parent is a pointer to the parent node of the node to create
* And value is the value to put in the new node
* When created, a node does not have any child
* Your function must return a pointer to the new node, or NULL on failure

**[1. Insert left:](https://github.com/Matteo-lu/binary_trees/blob/main/1-binary_tree_insert_left.c)**
Write a function that inserts a node as the left-child of another node

* Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
* Where parent is a pointer to the node to insert the left-child in
* And value is the value to store in the new node
* Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
* If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

**[2. Insert right:](https://github.com/Matteo-lu/binary_trees/blob/main/2-binary_tree_insert_right.c)**
Write a function that inserts a node as the right-child of another node

* Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
* Where parent is a pointer to the node to insert the right-child in
* And value is the value to store in the new node
* Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
* If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

**[3. Delete:](https://github.com/Matteo-lu/binary_trees/blob/main/3-binary_tree_delete.c)**
Write a function that deletes an entire binary tree

* Prototype: void binary_tree_delete(binary_tree_t *tree);
* Where tree is a pointer to the root node of the tree to delete
* If tree is NULL, do nothing

**[4. Is leaf:](https://github.com/Matteo-lu/binary_trees/blob/main/4-binary_tree_is_leaf.c)**
Write a function that checks if a node is a leaf

* Prototype: int binary_tree_is_leaf(const binary_tree_t *node);
* Where node is a pointer to the node to check
* Your function must return 1 if node is a leaf, otherwise 0
* If node is NULL, return 0

**[5. Is root:](https://github.com/Matteo-lu/binary_trees/blob/main/5-binary_tree_is_root.c)**
Write a function that checks if a given node is a root

* Prototype: int binary_tree_is_root(const binary_tree_t *node);
* Where node is a pointer to the node to check
* Your function must return 1 if node is a root, otherwise 0
* If node is NULL, return 0

**[6. Pre-order traversal:](https://github.com/Matteo-lu/binary_trees/blob/main/6-binary_tree_preorder.c)**
Write a function that goes through a binary tree using pre-order traversal

* Prototype: void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
* Where tree is a pointer to the root node of the tree to traverse
* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this * function.
* If tree or func is NULL, do nothing

**[7. In-order traversal:](https://github.com/Matteo-lu/binary_trees/blob/main/7-binary_tree_inorder.c)**
Write a function that goes through a binary tree using in-order traversal

* Prototype: void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
* Where tree is a pointer to the root node of the tree to traverse
* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this * function.
* If tree or func is NULL, do nothing

**[8. Post-order traversal:](https://github.com/Matteo-lu/binary_trees/blob/main/8-binary_tree_postorder.c)**
Write a function that goes through a binary tree using post-order traversal

* Prototype: void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
* Where tree is a pointer to the root node of the tree to traverse
* And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this * function.
* If tree or func is NULL, do nothing

**[9. Height:](https://github.com/Matteo-lu/binary_trees/blob/main/9-binary_tree_height.c)**
Write a function that measures the height of a binary tree

* Prototype: size_t binary_tree_height(const binary_tree_t *tree);
* Where tree is a pointer to the root node of the tree to measure the height.
* If tree is NULL, your function must return 0

**[10. Depth:](https://github.com/Matteo-lu/binary_trees/blob/main/10-binary_tree_depth.c)**
Write a function that measures the depth of a node in a binary tree

* Prototype: size_t binary_tree_depth(const binary_tree_t *tree);
* Where tree is a pointer to the node to measure the depth
* If tree is NULL, your function must return 0

**[11. Size:](https://github.com/Matteo-lu/binary_trees/blob/main/11-binary_tree_size.c)**
Write a function that measures the size of a binary tree

* Prototype: size_t binary_tree_size(const binary_tree_t *tree);
* Where tree is a pointer to the root node of the tree to measure the size
* If tree is NULL, the function must return 0

**[12. Leaves:](https://github.com/Matteo-lu/binary_trees/blob/main/12-binary_tree_leaves.c)**
Write a function that counts the leaves in a binary tree

* Prototype: size_t binary_tree_leaves(const binary_tree_t *tree);
* Where tree is a pointer to the root node of the tree to count the number of leaves
* If tree is NULL, the function must return 0
* A NULL pointer is not a leaf

**[13. Nodes:](https://github.com/Matteo-lu/binary_trees/blob/main/13-binary_tree_nodes.c)**
Write a function that counts the nodes with at least 1 child in a binary tree

* Prototype: size_t binary_tree_nodes(const binary_tree_t *tree);
* Where tree is a pointer to the root node of the tree to count the number of nodes
* If tree is NULL, the function must return 0
* A NULL pointer is not a node

**[14. Balance factor:](https://github.com/Matteo-lu/binary_trees/blob/main/14-binary_tree_balance.c)**
Write a function that measures the balance factor of a binary tree

* Prototype: int binary_tree_balance(const binary_tree_t *tree);
* Where tree is a pointer to the root node of the tree to measure the balance factor
* If tree is NULL, return 0

**[15. Is full:](https://github.com/Matteo-lu/binary_trees/blob/main/15-binary_tree_is_full.c)**
Write a function that checks if a binary tree is full

* Prototype: int binary_tree_is_full(const binary_tree_t *tree);
* Where tree is a pointer to the root node of the tree to check
* If tree is NULL, your function must return 0

**[16. Is perfect:](https://github.com/Matteo-lu/binary_trees/blob/main/16-binary_tree_is_perfect.c)**
Write a function that checks if a binary tree is perfect

* Prototype: int binary_tree_is_perfect(const binary_tree_t *tree);
* Where tree is a pointer to the root node of the tree to check
* If tree is NULL, your function must return 0

**[17. Sibling:](https://github.com/Matteo-lu/binary_trees/blob/main/17-binary_tree_sibling.c)**
Write a function that finds the sibling of a node

* Prototype: binary_tree_t *binary_tree_sibling(binary_tree_t *node);
* Where node is a pointer to the node to find the sibling
* Your function must return a pointer to the sibling node
* If node is NULL or the parent is NULL, return NULL
* If node has no sibling, return NULL

**[18. Uncle:](https://github.com/Matteo-lu/binary_trees/blob/main/18-binary_tree_uncle.c)**
Write a function that finds the uncle of a node

* Prototype: binary_tree_t *binary_tree_uncle(binary_tree_t *node);
* Where node is a pointer to the node to find the uncle
* Your function must return a pointer to the uncle node
* If node is NULL, return NULL
* If node has no uncle, return NULL

<br />

## Design by:

**:woman: Diana Parra**

:green_book: [GitHub](https://github.com/dianaparr/)

:bird: [Twitter](https://twitter.com/dianaparra017)

:wave: [LinkedIn](https://www.linkedin.com/in/dev-diana-parra/)
