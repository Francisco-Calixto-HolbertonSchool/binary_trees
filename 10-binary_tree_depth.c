#include "binary_trees.h"

/**
 * binary_tree_depth - Entry point
 * @tree: pointer to node to measure the depth
 * Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		depth = (1 + binary_tree_depth(tree->parent));
	else
		depth += 0;
	return (depth);
}
