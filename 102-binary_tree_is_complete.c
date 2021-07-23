#include "binary_trees.h"
#include "16-binary_tree_is_perfect.c"

/**
 * binary_tree_is_perfect_1 - Entry point
 * @tree: pointer to tree root
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_perfect_1(const binary_tree_t *tree)
{
	size_t size, height;

	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	size = size - _pow_recursion(2, height);
	if (_pow_recursion(2, height) == size + 1)
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - Entry point
 * @tree: pointer to tree root
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree || binary_tree_is_perfect_1(tree) == 0)
		return (0);
	if (binary_tree_is_perfect(tree) == 1)
		return (1);
	return (0);
}