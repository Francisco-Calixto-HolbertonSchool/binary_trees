#include "binary_trees.h"
#include "10-binary_tree_depth.c"
#include "9-binary_tree_height.c"

/**
 * aux - Entry point
 * @tree: pointer to root
 * @i: iterator
 * @func: function
 */

void aux(const binary_tree_t *tree, size_t i, void (*func)(int))
{
	if(binary_tree_depth(tree) == i)
		func(tree->n);
	aux(tree->left, i, func);
	printf("hola\n");
	aux(tree->right, i, func);
}

/**
 * binary_tree_levelorder - Entry point
 * @tree: pointer to root
 * @func: pointer to func
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t depth, i, height;

	if (!tree || !func)
		return;

	depth = binary_tree_depth(tree);
	height = binary_tree_height(tree);
	if (depth == 0)
		func(tree->n);
	for (i = 1; i <= height; i++)
	{
		aux(tree, i, func);
	}
}
