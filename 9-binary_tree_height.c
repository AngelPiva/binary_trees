#include "binary_trees.h"

/**
 *bin_height - measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height
 *Return: height of a binary tree
 */

size_t bin_height(const binary_tree_t *tree)
{
	size_t aux1 = 0, aux2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	aux1 = bin_height(tree->left);
	aux2 = bin_height(tree->right);
	if (aux1 > aux2)
		return (aux1 + 1);
	else
		return (aux2 + 1);
}

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height
 *Return: height of a binary tree - 1
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (bin_height(tree) - 1);
}
