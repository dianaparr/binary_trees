#include "binary_trees.h"

/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using level-order traversal
 *
 * @tree:  pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: If tree or func is NULL, do nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = 0;
	int i = 0;

	if (tree == NULL || func == NULL)
		return;

	h = binary_tree_height(tree) + 1; /*+1 next sub-tree*/

	while (i <= h)
	{
		print_nodes_level_current(tree, func, i);
		i++;
	}
}

/**
 * print_nodes_level_current - function that print all nodes at a current level
 *
 * @tree: pointer to the root node of the tree to measure the height.
 * @func: pointer to a function to call for each node
 * @level: refers to the current level in the tree
 *
 * Return: If tree or func is NULL, do nothing
 */

void print_nodes_level_current(const binary_tree_t *tree, void(*func)(int),
int level)
{
	if (tree == NULL || func == NULL)
		return;

	if (level == 1)
		func(tree->n);

	if (level > 1)
	{
		print_nodes_level_current(tree->left, func, level - 1); /*-1 by recursion*/
		print_nodes_level_current(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * using post-order traversal
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	else
		left_height = 1;

	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	else
		right_height = 1;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
