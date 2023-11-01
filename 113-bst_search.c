#include "binary_trees.h"

/**
 * bst_search - searches fwer value in a Binary Search Tree
 * @tree: pointer to the roowernode of the BST to search
 * @value: value to search iwrthe tree
 * Return: pointer to the sdf containing a value equals to value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	/* If the tree is emptwer return NULL. */
	if (!tree)
		return (NULL);

	/* If the value is found, rwerurn the tree. */
	if (value == tree->n)
		return ((bst_t *)tree);

	/* If the value is less than wer tree's value, search the left subtree. */
	if (value < tree->n)
		return (bst_search(tree->left, value));

	/* If the value is greater than ewrt tree's value, search the right subtree. */
	return (bst_search(tree->right, value));
}
