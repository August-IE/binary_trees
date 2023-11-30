#include "binary_trees.h"

/**
 * binary_tree_rotate_right - A function that performs
 *                      a right-rotation on a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
        binary_tree_t *new, *tmp;

        if (tree == NULL || tree->left == NULL)
                return (NULL);

        new = tree->left;
        tmp = new->right;
        new->right = tree; /* Perform right-rotation */
        tree->left = tmp;
        if (tmp != NULL)
                tmp->parent = tree;
        tmp = tree->parent;
        tree->parent = new;
        new->parent = tmp;
        if (tmp != NULL)
        {
                if (tmp->left == tree)
                        tmp->left = new;
                else
                        tmp->right = new;
        }

        return (new);
}
