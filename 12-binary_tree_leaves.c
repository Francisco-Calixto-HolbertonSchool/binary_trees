#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to tree root
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	binary_tree_leaves(tree->left);
	if (!tree->right && !tree->left)
		size++;
	binary_tree_leaves(tree->right);
	return (size);
}
