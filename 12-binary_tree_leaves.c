#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * This function recursively calculates the number of leaf nodes in the binary
 * tree rooted at the given node. A leaf node is a node with no children.
 *
 * Return: The number of leaf nodes in the binary tree. If the tree is NULL,
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
