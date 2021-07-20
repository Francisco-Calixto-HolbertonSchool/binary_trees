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
	if (tree->left)
		binary_tree_leaves(tree->left);
	else
		size += 1;
	if (tree->right)
		binary_tree_leaves(tree->right);
	else
		size += 1;
	return (size);
}
