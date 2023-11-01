#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree.
 * @tree: double pointer to the root node of the BST to insert the value.
 * @value: value to store in the node to be inserted.
 *
 * If the address stored in tree is NULL, the created node must become
 * the root node.
 * If the value is already present in the tree, it must be ignored.
 *
 * Return: pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node = NULL;
	bst_t *current = NULL;

	if (!tree) 
		return (NULL);
	new_node = binary_tree_node(NULL, value); 
	if (!new_node)
		return (NULL);
	if (!*tree) 
	{
		*tree = new_node; 
		return (new_node); 
	}
	current = *tree; 
	while (current)
	{
		if (value < current->n) 
		{
			if (!current->left)
			{
				current->left = new_node;
				new_node->parent = current;
				break;
			}
			current = current->left; 
		}
		else if (value > current->n)
		{
			if (!current->right)
			{
				current->right = new_node;
				new_node->parent = current;
				break;
			}
			current = current->right; 
		}
		else
		{
			free(new_node); 
			return (NULL);
		}
	}
	return (new_node); 
}
