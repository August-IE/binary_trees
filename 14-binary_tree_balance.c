#include "binary_trees.h"

/**
 * binary_tree_balance - A function that measures the balance
 *			factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 - If tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - A function that measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 - If tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t L = 0, R = 0;

		L = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		R = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((L > R) ? L : R);
	}
	return (0);
}
