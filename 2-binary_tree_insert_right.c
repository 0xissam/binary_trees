#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as a,
 * right-child of another node.
 *
 * @parent: pointer to a node to insert a right-child in.
 * @value: value to store in a new node.
 *
 * If parent already has a right-child, a new node must take its place,
 * and a old right-child must be set as a right-child of a new node.
 *
 * Return: pointer to a created node, or NULL on failure or if parent,
 * is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent != NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node != NULL)
		{
			new_node->left = NULL;
			new_node->right = parent->right;
			new_node->parent = parent;
			new_node->n = value;
			if (parent->right != NULL)
				parent->right->parent = new_node;
			parent->right = new_node;
		}
	}
	return (new_node);
}
