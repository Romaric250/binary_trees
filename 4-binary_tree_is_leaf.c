#include "binary_trees.h"

/**
 * binary_tree_is_leaf - the func cchecks if a node is a leaf
 * @node: testing node
 *
 * Return: 1 if nod is leaf
 *         0 if not leaf
 *         0 if NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
