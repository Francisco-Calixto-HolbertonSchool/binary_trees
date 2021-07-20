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
	{
		binary_tree_size(tree->left);
		size++;
	}
	else
		size += 1;
	if (tree->right)
	{
		binary_tree_size(tree->right);
		size++;
	}
	else
		size += 1;
	return (size);
}
