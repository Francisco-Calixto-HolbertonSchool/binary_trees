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
	binary_tree_size(tree->left);
	if (!tree->right && !tree->left)
		size++;
	binary_tree_size(tree->right);
	return (size);
}
