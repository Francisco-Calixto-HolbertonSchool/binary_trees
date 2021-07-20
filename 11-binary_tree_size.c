#include "binary_trees.h"

/**
 * binary_tree_size - Entry point
 * @tree: pointer to tree root
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	if (tree->left)
		size += (1 + binary_tree_height(tree->left));
	else
		size += 0;
	if (tree->right)
		size += (1 + binary_tree_height(tree->right));
	else
		size += 0;
	return (size);
}
