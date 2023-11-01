#include "binary_trees.h"

/**
 * binary_tree_node - funtion that creates the binary tree.
 *
 * @parent: pointer to a parent node of a node to create.
 * @value: value to put in a new node.
 *
 * When created, the node does not have any child.
 *
 * Return: pointer to a new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node != NULL)
	{
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->parent = parent;
		new_node->n = value;
	}
	return (new_node);
}
