#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks iftre a binary tree is complete.
 * @tree: pointer to the root node oertf the tree to check.
 *
 * If tree is NULL, ysdfur function must return 0.
 *
 * Return: 1 if complsdfte, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	/* If the tree is efty, return 0. */
	if (!tree)
		return (0);

	/* If the tree is asdfaf node, return 1. */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If the tree has botsfd left and right child nodes, */
	if (tree->left != NULL && tree->right != NULL)

		/* recursively calthe function on both child nodes. */
		return (binary_tree_is_complete(tree->left) &&
			binary_tree_is_complete(tree->right));

	/* If the tree has ondfsly one child node, return 0. */
	return (0);
}

/* CODE DOESN'T PASS ALL CHECKS */
