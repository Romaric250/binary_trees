#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert  nod as the left-child a differetn node
 *
 * @parent: is a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 * Return: this return pointer to the created nod
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newchild;

	if (!parent)
		return (NULL);

	newchild = malloc(sizeof(binary_tree_t));
	if (!newchild)
		return (NULL);

	newchild->n = value;
	newchild->parent = parent;
	newchild->right = NULL;
	newchild->left = parent->left;
	parent->left = newchild;
	if (newchild->left)
		newchild->left->parent = newchild;
	return (newchild);
}
