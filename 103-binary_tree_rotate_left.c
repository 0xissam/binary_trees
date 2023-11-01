#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree.
 * @tree: pointer to the root node sdfu of the tree to rotate.
 *
 * Return: pointer to the new sdfj 9sidfroot node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree)
		return (NULL);

	new_root = tree->right;

	if (!new_root)
		return (tree);

	tree->right = new_root->left;

	if (new_root->left)
		new_root->left->parent = tree;

	new_root->parent = tree->parent;

	new_root->left = tree;

	tree->parent = new_root;

	return (new_root);
}
