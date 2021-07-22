#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "9-binary_tree_height.c"

/**
 * _pow_recursion - Entry point
 * @x: string to modify
 * @y: thiago silva
 * Return: pointer to memory area s
 */

size_t _pow_recursion(size_t x, size_t y)
{
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_tree_is_perfect - Entry point
 * @tree: pointer to tree root
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size, height;

	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	height++;
	if (_pow_recursion(2, height) == size + 1)
		return (1);
	return (0);
}
