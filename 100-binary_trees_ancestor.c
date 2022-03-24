#include "binary_trees.h"

/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *@tree: pointer to the node to measure the depth
 *Return: depth of a node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent)
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
	return (0);
}
/**
 *binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *@first: pointer to the first node
 *@second: pointer to the second node
 *Return: a pointer to the lowest common ancestor node of the two given nodes
 *If no common ancestor was found, your function must return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL || (second == NULL && first == NULL))
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	else if (binary_tree_depth(first) < binary_tree_depth(second))
		return (binary_trees_ancestor(first, second->parent));
	else if (binary_tree_depth(second) < binary_tree_depth(first))
		return (binary_trees_ancestor(first->parent, second));
	else if (first->parent == second->parent)
		return (first->parent);
	else
		return (NULL);

}
