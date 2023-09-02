#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a Binary Search Tree (BST).
 * @tree: A pointer to the root node of the BST to search.
 * @value: The value to search for in the tree.
 *
 * Return: A pointer to the node containing an int equal to `value`.
 *         NULL if `tree` is NULL or no match is found.
 *
 * Description: This function searches for a specific value in a Binary Search
 *              Tree (BST). It takes a pointer to the root node of the BST and
 *              the value to search for. If the value is found in the tree, it
 *              returns a pointer to the node containing the value. If the tree
 *              is empty or the value is not found, it returns NULL.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	const bst_t *current = tree;

	if (!current)
		return (NULL);

	while (current)
	{
		if (value == current->n)
			return ((bst_t *)current);
		if (value < current->n)
			current = current->left;
		else if (value > current->n)
			current = current->right;
	}

	return (NULL);
}
