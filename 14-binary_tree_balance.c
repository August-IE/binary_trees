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
	if (tree == NULL)
	return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((int)left_height - (int)right_height);
}

/**
 * binary_tree_height - A function that measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 - If tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t L = 0, R = 0;

		L = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		R = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((L > R) ? L : R);
	}
	return (0);
}
