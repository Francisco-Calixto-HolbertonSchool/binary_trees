#include "binary_trees.h"

/**
 * binary_tree_sibling - Entry point
 * @node: pointer to node to check if is hijo unico
 * Return: 1 if hijo unico 0 otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left->n == node->n)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
