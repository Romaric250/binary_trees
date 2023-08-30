#include "binary_trees.h"

/**
 * binary_tree_delete - delete the entire binary tree oops
 * @tree: pointer to the root node
 * Description: If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
