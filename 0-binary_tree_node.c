#include "binary_trees.h"

/**
 *binary_tree_node - function that creates a binary tree node
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in the new node
 *Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_tree = NULL;

	binary_tree = malloc(sizeof(binary_tree_t));
	if (!binary_tree)
		return (NULL);
	binary_tree->n = value;
	binary_tree->parent = parent;
	binary_tree->left = NULL;
	binary_tree->right = NULL;

	return (binary_tree);
}
