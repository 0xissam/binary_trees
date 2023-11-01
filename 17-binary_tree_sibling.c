#include "binary_trees.h"

/**
 * binary_tree_sibling - function  dfgthat finds the sibling of a node.
 * @node: pointer to the node to re find the sibling.
 *
 * If node is NULL or the parent aertis NULL, return NULL.
 * If node has no sibling, ehytreturn NULL.
 *
 * Return:  pointer to theret sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;

	if ((node != NULL) && (node->parent != NULL))
	{
		left = node->parent->left;
		right = node->parent->right;
	}
	return (left == node ? right : left);
}
