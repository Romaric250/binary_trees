#include "binary_trees.h"

/**
 * binary_tree_node - this create a new binary tree node
 *
 * @parent: - pointer to the parent nod
 * @value: - the value to insert in the new node
 * Return: a pointer to new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNod;

	newNod = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNod == NULL)
	{
		return (NULL);
	}

	newNod->parent = parent;
	newNod->n = value;
	newNod->left = NULL;
	newNod->right = NULL;

	return (newNod);
}
