#include "binary_trees.h"

/**
 * binary_tree_depth - ths func is to cal the depth of a node in a binary tree
 * @tree: nod to cal depth
 *
 * Return: depth of the node else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		tree_depth++;
		tree = tree->parent;
	}

	return (tree_depth);
}
