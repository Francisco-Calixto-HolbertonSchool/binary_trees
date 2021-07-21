#include "binary_trees.h"

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

/**
 * binary_tree_balance - Entry point
 * @tree: pointer to tree node to measure balance
 * Return: left child height - right child height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l += ((int) binary_tree_height(tree->left));
	else
		l -= 1;
	if (tree->right)
		r += ((int) binary_tree_height(tree->right));
	else
		r -= 1;
	return (l - r);
}
