#include "binary_trees.h"

/**
 * binary_tree_sibling - Retrieves the sibling of a given node.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node, or NULL in the following cases:
 *         - The given node is NULL.
 *         - The parent of the given node is NULL.
 *         - The given node has no siblings.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return NULL;

	if (node == node->parent->left)
		return node->parent->right;
	
	return node->parent->left;
}
