#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: Return new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	// new_node = malloc(sizeof(binary_tree_t));
	// if (new_node == NULL)
	// {
	// 	return (NULL);
	// }

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	// new_node->n = value;
	// if (parent->right == NULL)
	// {
	// 	parent->right = new_node;
	// }
	// else
	// {
	// 	parent->right->parent = new_node;
	// 	new_node->right = parent->right;
	// }
	if (parent->right)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	parent->right = new_node;

	return (new_node);
}
