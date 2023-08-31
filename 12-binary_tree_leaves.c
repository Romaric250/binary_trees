#include "binary_trees.h"

/**
 * binary_tree_leaves - computes the leaves in a the binary tree
 * @tree: tree to ct the leeves
 *
 * Return: the num of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
