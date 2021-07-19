#include "binary_trees.h"

/**
 * binary_tree_node - Entry point
 * @parent: pointer to parent node
 * @value: value of new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	new->n = value;
	return (new);
}
