#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a tree using post-order traversa
 * @tree: tree to traverse through
 * @func: pointer to a function to call for each nod
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
