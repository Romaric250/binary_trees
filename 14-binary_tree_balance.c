#include "binary_trees.h"
/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right_t = 0, left_t = 0;
       int sum = 0;

	if (tree)
	{
		left_t = ((int)binary_tree_height_test(tree->left));
		right_t = ((int)binary_tree_height_test(tree->right));
		sum = left_t - right_t;
	}
	return (sum);
}

/**
 * binary_tree_height_test - Measures the height of a binary tree (balanced)
 * @tree: Pointer to the root of the tree
 * Return: The height of the tree
 */
size_t binary_tree_height_test(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_height = tree->left ? 1 + binary_tree_height_test(tree->left) : 1;
			right_height = tree->right ? 1 + binary_tree_height_test(tree->right) : 1;
		}
		return ((left_height > right_height) ? left_height : right_height);
	}
}
