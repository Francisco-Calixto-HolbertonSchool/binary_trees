#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 * @parent: pointer to parent node
 * @value: value of new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->right = NULL;
	new->parent = parent;
	if (!parent->left)
	{
		new->left = NULL;
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		new->left->parent = new;
		parent->left = new;
	}
	return (new);
}
