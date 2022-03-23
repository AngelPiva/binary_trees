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

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance factor
 *Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int aux1, aux2;

	if (tree == NULL)
		return (0);

	aux1 = binary_tree_height(tree->left);
	aux2 = binary_tree_height(tree->right);
	return (aux1 - aux2);
}

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *Return: 1 if it is perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int aux1 = 0, aux2 = 0;

	if (tree == NULL)
		return (0);
	if (binary_tree_balance(tree) != 0)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	aux1 = binary_tree_is_perfect(tree->right);
	aux2 = binary_tree_is_perfect(tree->left);

	if (aux1 == 1 && aux2 == 1)
		return (1);
	return (0);
}
