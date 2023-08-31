#include "binary_trees.h"

/**
 * binary_tree_nodes - returnor coount the num of nods
 * @tree: tree from which the nodes are counted
 *
 * Return: number counted nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - this func measure the size of binary tree
 * @tree: tree to measure
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
