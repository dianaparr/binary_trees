#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL return 0
 */

size_t _depth(const binary_tree_t *tree);

int binary_tree_is_perfect(const binary_tree_t *tree)
{

}

size_t _depth(const binary_tree_t *tree)
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
