#include "binary_trees.h"

/**
 * max - Entry point
 * @a: number 1
 * @b: number 2
 * Return: max number
 */
size_t max(size_t a, size_t b)
{
	if (a >= b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - Entry point
 * @tree: pointer to tree root
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = (1 + binary_tree_height(tree->left));
	else
		left += 0;
	if (tree->right)
		right = (1 + binary_tree_height(tree->right));
	else
		right += 0;
	if (right >= left)
		return (right);
	return (left);
}
