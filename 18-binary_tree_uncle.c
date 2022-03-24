#include "binary_trees.h"

/**
 *binary_tree_uncle - finds the uncle of a node
 *@node: pointer to the node to find the uncle
 *Return: a pointer to the uncle node, otherwise NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
	{
		node = node->parent->parent->right;
		if (node)
			return (node);
		else
			return (NULL);
	}
	if (node->parent == node->parent->parent->right)
	{
		node = node->parent->parent->left;
		if (node)
			return (node);
		else
			return (NULL);
	}
	return (NULL);
}
