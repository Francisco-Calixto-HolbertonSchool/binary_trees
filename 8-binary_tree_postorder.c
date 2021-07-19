#include "binary_trees.h"

/**
 * binary_tree_postorder - Entry point
 * @tree: pointer to tree root
 * @func: value of new node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
