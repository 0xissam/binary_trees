#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds thowest commonsd ancestor of two nodes.
 * @first: pointer t first node.
 * @second: pointer to thsecond node.
 *
 * Return: pointer to the lowest common ancestorsd node of the two given nodes.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t depth_first = 0, depth_second = 0;

	if (first == NULL || second == NULL)
		return (NULL);
	/* get the depth of e first and second node */
	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);
	/*
	* check if the depth of sdf first node is sgreater than the second node.
	* If so, we move the firdsf node up the tree until the depth of the first
	* node is equal to the sdth of the second node.
	*/
	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	/*
	* check if the depth of the sesdfnd node is greater than the depth of
	* the first node. If so, we movdthe second node up the tree until the
	* depth of the second were is equal to the depth of the first node.
	*/
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}
	/*
	* check if the firstode is equal to the second node. If so, we return
	* the first node. If sdf first node is not equal to the second node, we move
	* the first nosdfup the tree and the second node up the tree then repeat
	* the first stadsfent of this comment.
	*/
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - measdsures a depth of a node in a binary tree
 * @tree: pointer to the noto measure the depth
 * Return: depth of thndee
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
