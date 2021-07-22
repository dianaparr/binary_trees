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
	if (first == NULL || second == NULL)
		return (NULL);

	while (first->parent != NULL)
	{
		while (second->parent != NULL)
		{
			if (first == second)
				return (first->parent);
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
