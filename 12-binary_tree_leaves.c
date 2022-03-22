#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree: pointer to the root node of the tree to count the number of leaves
 *Return: leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		if (tree->right == NULL && tree->left == NULL)
			count += 1;
		count += binary_tree_leaves(tree->right);
		count += binary_tree_leaves(tree->left);
	}
	return (count);
}
