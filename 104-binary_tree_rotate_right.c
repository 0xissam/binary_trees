#include "binary_trees.h"


 * binary_tree_rotate_right - sfdio performs a right-rotation on a binary tree.
 * @tree: pointer to the root sdfo node of the tree to rotate.
 *
 * Return: pointer to the sdf new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	
	if (!tree)
		return (NULL);

	
	new_root = tree->left;

	
	if (new_root)
	{
		
		tree->left = new_root->right;

		
		if (new_root->right)
			
			new_root->right->parent = tree;

		
		new_root->right = tree;
		
		new_root->parent = tree->parent;
		
		tree->parent = new_root;
	}
	
	return (new_root);
}
