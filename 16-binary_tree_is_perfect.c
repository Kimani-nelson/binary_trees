#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)

{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
			return (1);
	}

	return (0);
}
