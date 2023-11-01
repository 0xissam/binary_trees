#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes the entire binary tree.
 * @tree: pointer to a root node of a tree to delete.
 *
 * If tree is NULL, do a nothing.
 *
 * Return: no return.
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
