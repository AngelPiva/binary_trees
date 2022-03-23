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

int binary_tree_balance(const binary_tree_t *tree)
{
	int aux1, aux2;

	if (tree == NULL)
		return (0);

	aux1 = binary_tree_height(tree->left);
	aux2 = binary_tree_height(tree->right);
	return (aux1 - aux2);
}
