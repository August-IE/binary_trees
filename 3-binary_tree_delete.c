#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * Description: If tree is NULL, do nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	binary_tree_t *current = tree;
	binary_tree_t *temp = NULL;

	while (current != NULL)
	{
		if (current->left != NULL)
		{
			temp = current->left;
			current->left = NULL;
			current = temp;
		}
		else if (current->right != NULL)
		{
			temp = current->right;
			current->right = NULL;
			current = temp;
		}
		else
		{
			temp = current->parent;
			free(current);
			current = temp;
		}
	}
}
