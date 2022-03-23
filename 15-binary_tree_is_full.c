#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree: pointer to the root node of the tree to check
 *Return: 1 is full and 0 is not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int aux1, aux2;

	if (tree == NULL)
		return (0);
	if (tree != NULL && tree->left == NULL && tree->right == NULL)
		return (1);

	aux1 = binary_tree_is_full(tree->left);
	aux2 = binary_tree_is_full(tree->right);

	if (aux1 == 1 && aux2 == 1)
		return (1);
	else
		return (0);
}
