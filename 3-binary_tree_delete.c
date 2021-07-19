#include "binary_trees.h"
/**
 * recursive_free - Entry point
 * @aux: pointer to tree root
 */
void recursive_free(binary_tree_t *aux)
{
	if (!aux)
		return;
	recursive_free(aux->left);
	recursive_free(aux->right);
	free(aux);
}
/**
 * binary_tree_postorder - Entry point
 * @tree: pointer to tree root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *aux;

	if (!tree)
		return;
	aux = tree;
	recursive_free(aux);
}
