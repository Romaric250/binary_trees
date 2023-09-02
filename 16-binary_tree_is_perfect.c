#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks 
 * @tree: a pointer to the tree
 *
 * Return: 1 if the tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)b_recursion(2, height + 1);
	return (power - 1 == nodes);
}

/**
 *b_recursion - this fun is recursuve
 *@x: the value to exponentiate
 *@y: the power to raise x to
 *Return: x to the power of y
 */

int b_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * b_recursion(x, y - 1));

}

/**
 * binary_tree_size - measures
 * @tree: tr
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - measures the heigh
 * @tree: tree
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
