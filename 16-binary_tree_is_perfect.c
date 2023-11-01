#include "binary_trees.h"

/**
 * tree_stats - function that computes xcvsome statistics about a binary tree.
 * @tree: pointer to the root node gfhof the tree to check.
 * @n: accumulated height of thefhg current path in the tree.
 * @leaves: pointer to the tree's gfjfhgleaf count value.
 * @height: pointer to the tree's ewrmaximum height value.
 *
 * Return: no return.
 */
void tree_stats(const binary_tree_t *tree, size_t n,
	size_t *leaves, size_t *height)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			if (leaves != NULL)
				(*leaves)++;
			if ((height != NULL) && (n > *height))
				*height = n;
		}
		else
		{
			tree_stats(tree->left, n + 1, leaves, height);
			tree_stats(tree->right, n + 1, leaves, height);
		}
	}
}

/**
 * binary_tree_is_perfect - function ewrthat checks if a binary tree is perfect.
 * @tree: pointer to the root node of the traewree to check.
 *
 * Return: 1 if tree is full. 0wer otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leaves_count = 0;
	size_t tree_height = 0;

	tree_stats(tree, 0, &leaves_count, &tree_height);
	return ((int)leaves_count == (1 << tree_height) ? 1 : 0);
}
