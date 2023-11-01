#include "binary_trees.h"

/**
 * binary_tree_delete - function sdfui that deletes an entire binary tree.
 * @tree: pointer to thejkdsf  root node of the tree to delete.
 *
 * If tree is NULL, do  usidfnothing.
 *
 * Return: nohjs return.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
