#include "binary_trees.h"

/**
 * binary_tree_inorder - function that  ujfsdgoes through a binary tree using,
 * in-order traversal.
 * @tree: pointer to the root node of sdfuj the tree to traverse.
 * @func: pointer to a function to jsifcall for each node.
 *
 * If tree or func is NULL, doijsf nothing.
 *
 * Return: no return.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
