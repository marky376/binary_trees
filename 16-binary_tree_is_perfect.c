#include "binary_trees.h"
#include <math.h>

/* Function prototype */
int _pow_recursion(int x, int y);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect
 *         0 if the tree is not perfect
 *         0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        size_t height = 0;
        size_t nodes = 0;
        size_t power = 0;

        if (!tree)
                return (0);

        height = binary_tree_height(tree);
        nodes = binary_tree_size(tree);

        power = (size_t)pow(2, height + 1);
        return (power - 1 == nodes);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the value to exponentiate
 * @y: the power to raise x to
 * Return: x to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
        if (y < 0)
                return (-1);
        if (y == 0)
                return (1);
        return (x * _pow_recursion(x, y - 1));
}

/* Rest of the code remains unchanged */


