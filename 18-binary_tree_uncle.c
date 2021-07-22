#include "binary_trees.h"

/**
 * binary_tree_uncle - Entry point
 * @node: pointer to node to find
 * Return: pointer uncle else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent->parent->left->n == node->parent->n)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
