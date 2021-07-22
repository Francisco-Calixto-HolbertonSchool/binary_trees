#include "binary_trees.h"
#include "10-binary_tree_depth.c"

/**
 * binary_tree_ancestor - Entry point
 * @first: first node to compare
 * @second: second node to compare
 * Return: lowest common ancestor of nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *root;
	size_t d_1, d_2;

	if (!first || !second)
		return (NULL);
	root = first;
	d_1 = binary_tree_depth(first);
	d_2 = binary_tree_depth(second);
	while (root->parent)
		root = root->parent;
	if (!first->parent || !second->parent)
		return ((binary_tree_t *) root);
	while (d_1 > d_2)
	{
		first = first->parent;
		d_1--;
	}
	while (d_1 < d_2)
	{
		second = second->parent;
		d_2--;
	}
	if (second->n == first->n)
		return ((binary_tree_t *) first);
	if (first->parent->n == second->parent->n)
		return (first->parent);
	return ((binary_tree_t *) root);
}
