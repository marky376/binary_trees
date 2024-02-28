#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * This function recursively calculates the size of the binary tree rooted
 * at the given node. The size of a binary tree is defined as the total
 * number of nodes present in the tree.
 *
 * Return: The size of the binary tree. If the tree is NULL, returns 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
