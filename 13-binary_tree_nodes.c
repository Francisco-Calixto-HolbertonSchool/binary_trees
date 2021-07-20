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
	size = (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	return (size);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to tree root
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leaves = binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);
	return (leaves);
}


/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * @tree: pointer to tree root
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
