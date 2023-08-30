#include "binary_trees.h"

/**
 * binary_tree_is_root - this funcs checks if a node is a root
 * @node: node to check from oops
 *
 * Return: 1 if node is root
 *         0 if not root
 *         0 if nod is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
