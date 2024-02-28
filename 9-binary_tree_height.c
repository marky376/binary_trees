#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Height of the binary tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		if (left_height > right_height)
			return (1 + left_height);
		else
			return (1 + right_height);
	}

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
