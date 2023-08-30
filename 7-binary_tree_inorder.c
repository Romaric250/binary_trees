#include "binary_trees.h"

/**
 * binary_tree_inorder -  binary tree traversing using in-order traversal
 * @tree: tree to traverse we are traversing
 * @func: pointer to a func for each nod
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
