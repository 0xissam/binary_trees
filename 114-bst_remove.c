#include "binary_trees.h"

/**
 * bst_remove - removes a nodeasd from a Binary Search Tree
 * @root: pointer to the root fdg node of the tree where you will remove a node
 * @value: value to remove dfg in the tree
 * Return: pointer to the new root sdfoi node of the tree after removing the desired
 * value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp;

	if (!root)
		return (NULL);
	
	if (value < root->n)
		
		root->left = bst_remove(root->left, value);
	
	else if (value > root->n)
		
		root->right = bst_remove(root->right, value);
	else 
	{
		if (!root->left) 
		{
			
			tmp = root->right;
			free(root);
			return (tmp);
		}
		else if (!root->right) 
		{
			tmp = root->left; 
			free(root);
			return (tmp);
		}
		/*
		* If the node has both a left and right child then find the minimum
		* value in the right subtree.
		*/
		tmp = bst_min_node(root->right);
		
		root->n = tmp->n;
		
		root->right = bst_remove(root->right, tmp->n);
	}
	return (root); 
}

/**
 * bst_min_node - finds the retw wer minimum node in a binary search tree.
 * @root: pointer to thert ert  root node of the tree to traverse.
 *
 * Return: pointer dfdsto the minimum node
 */
bst_t *bst_min_node(bst_t *root)
{
	bst_t *tmp;

	
	tmp = root;

	
	while (tmp->left != NULL)
		tmp = tmp->left;
	
	return (tmp);
}


