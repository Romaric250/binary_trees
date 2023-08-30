#include "binary_trees.h"

/**
 * binary_tree_height - this func measures the height of a binary tree
 * @tree: tree to measur h
 *
 * Return: height of the bin tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightleft = 0;
	size_t heightright = 0;

	if (!tree)
		return (0);

	heightleft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	heightright = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	if (heightleft > heightright)
		return (heightleft);
	else
		return (heightright);
}
