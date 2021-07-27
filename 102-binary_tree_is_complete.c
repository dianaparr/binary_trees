#include "binary_trees.h"

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 *
 * @tree:  pointer to the root node of the tree to traverse
 *
 * Return: If tree or func is NULL, do nothing
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size_tree = 0;

	if (tree == NULL)
		return (0);

	size_tree = binary_tree_size(tree);

	/* Recursion from the root node (index, set to zero) */
	/* and the number of nodes in size_tree */
	return (binary_tree_complete_check(tree, 0, size_tree));
}

/**
 * binary_tree_complete_check - recursively check the left and right sub-trees
 * of the binary tree for the condition if the binary tree is complete or not
 * (In the array representation of a binary tree)
 *
 * @tree: pointer to the root node of the tree to measure the height.
 * @index: index assigned to the current node
 * @number_nodes: the size tree or total number of nodes
 *
 * Return: If tree is NULL return 0
 */

int binary_tree_complete_check(const binary_tree_t *tree,
int index, int number_nodes)
{
	if (tree == NULL)
		return (1);

	if (index >= number_nodes)
		return (0);

	/*sub-tree left, index: 2*i+1 and sub-tree right, index: 2*i+2*/
	return (binary_tree_complete_check(tree->left, 2 * index + 1, number_nodes) &&
		    binary_tree_complete_check(tree->right, 2 * index + 2, number_nodes));
}

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;

	if (tree == NULL)
		return (0);

	else
	{
		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);

		return (left_size + right_size + 1);
	}
}
