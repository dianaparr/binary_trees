#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the lowest common
 * ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	const binary_tree_t *temp = NULL;
	int fd = binary_tree_depth(first), sd = binary_tree_depth(second);

	if (first == NULL || second == NULL)
		return (NULL);

	if (fd > sd)
	{
		temp = first;
		first = second;
		second = temp;
	}
	if (fd == sd)
	{
		while ((first->parent != NULL || second->parent != NULL) &&
				(first != second))
		{
			if (first->parent == second->parent)
				return (first->parent);
			first = first->parent;
			second = second->parent;
		}
	}
	while (first->parent != NULL)
	{
		while (second->parent != NULL)
		{
			if (first == second)
				return ((binary_tree_t *)(first));
			if (first == second->parent)
				return (second->parent);
			if (second == first->parent)
				return (first->parent);
			if (first->parent == second->parent)
				return (first->parent);
			second = second->parent;
		}
		first = first->parent;
	}
	return (NULL);
}

/**
 * binary_tree_depth - function that measures the depth
 * of a node in a binary tree
 * using post-order traversal
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent_depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	else
	{
		parent_depth = binary_tree_depth(tree->parent);

		return (parent_depth + 1);
	}
}
