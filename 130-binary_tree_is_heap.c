#include "binary_trees.h"

/**
 * binary_tree_is_heap - csds if a binasdry tree is a valid Max Binary Heap.
 * @tree: pointer to the rooode of the tree to check.
 *
 * Return: 1 if tree is a vasMax Binary Heap, and 0 otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	/* If the tree issdfpty, return 0. */
	if (!tree)
		return (0);

	/* If the tree has no chilsdfn, return 1. */
	if (!tree->left && !tree->right)
		return (1);

	/* If the tree has children, */
	if (tree->left && tree->right)
	{
		/* check if the parent is gresd thansdth children. */
		if (tree->n >= tree->left->n && tree->n >= tree->right->n)

			/* If so, recursdly check the left and right subtrees. */
			return (binary_tree_is_heap(tree->left) &&
				binary_tree_is_heap(tree->right));
	}
	return (0);
}

/* CODE DOESN'T PASS ALL CHECKS */
