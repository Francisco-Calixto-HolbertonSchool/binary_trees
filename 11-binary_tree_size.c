#include "binary_trees.h"

/**
 * binary_tree_size - Entry point
 * @tree: pointer to tree root
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = (1 + binary_tree_size(tree->left));
	else
		left += 0;
	if (tree->right)
		right = (1 + binary_tree_size(tree->right));
	else
		right += 0;
	return (right + left);
}
