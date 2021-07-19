#include "binary_trees.h"

/**
 * binary_tree_node - Entry point
 * @tree: pointer to tree root
 * @func: value of new node
 */

void recursion_left(const binary_tree_t *aux, void (*func)(int))
{
	if(aux->left)
	{
		func(aux->n);
		aux = aux->left;
	}
	recursion_right(aux, func);
}
void recursion_right(const binary_tree_t *aux, void (*func)(int))
{
	if (aux->right)
	{
		func(aux->n);
		aux = aux->right;
	}
	recursion_left(aux, func);
}
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *aux = NULL;

	if (!tree || !func)
		return;
	aux = tree;

	recursion_left(aux, func);
	recursion_right(aux, func);
}