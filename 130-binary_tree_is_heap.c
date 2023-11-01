#include "binary_trees.h"

/**
 * binary_tree_is_heap - checks  dfgreif a binary tree is a valid Max Binary Heap.
 * @tree: pointer to the fre root node of the tree to check.
 *
 * Return: 1 if tree is fgdg a valid Max Binary Heap, and 0 otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	
	if (!tree)
		return (0);

	
	if (!tree->left && !tree->right)
		return (1);

	
	if (tree->left && tree->right)
	{
		
		if (tree->n >= tree->left->n && tree->n >= tree->right->n)

			
			return (binary_tree_is_heap(tree->left) &&
				binary_tree_is_heap(tree->right));
	}
	return (0);
}


