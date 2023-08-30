#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the child
 * @parent: pointer to the node to insert the value
 * @value: value to store
 *
 * Return: a pointer new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newchild;

	if (!parent)
		return (NULL);

	newchild = malloc(sizeof(binary_tree_t));
	if (!newchild)
		return (NULL);

	newchild->n = value;
	newchild->parent = parent;
	newchild->left = NULL;
	newchild->right = parent->right;
	parent->right = newchild;
	if (newchild->right)
		newchild->right->parent = newchild;
	return (newchild);
}
