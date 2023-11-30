#include "binary_trees.h"

/**
 * binary_trees_ancestor - A function that finds the lowest
 *			common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: NULL - If no common ancestor was found.
 *	else a pointer to the lowest common ancestor node.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *i, *j;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	i = first->parent, j = second->parent;

	if (!i || (!i->parent && j))
	return (binary_trees_ancestor(first, j));

	if (!j || (!j->parent && i))
	return (binary_trees_ancestor(i, second));

	return (binary_trees_ancestor(i, j));
}
