#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth
 *			of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: 0 - If tree is NULL
 *	otherwise return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
