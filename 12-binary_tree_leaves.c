#include "binary_trees.h"

/**
 * binary_tree_leaves - function that sa  counts the leaves in a binary tree.
 * @tree: pointer to the root tree of the as tree to count the no. of leaves.
 *
 * Return: number of leaves. Ifa a tree is NULL the function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	/* Check for leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* traverse the binary atree using apre Order traversal as below */

	/* find the leaf nodesas in left oand right sub toree recursively */
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
