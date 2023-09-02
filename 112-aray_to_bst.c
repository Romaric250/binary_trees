#include "binary_trees.h"

/**
 * array_to_bst - Converts an array into a Binary Search Tree (BST).
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 *
 * Return: A pointer to the root node of the created BST.
 *         NULL if the conversion fails or the array is empty.
 *
 * Description: This function takes an array of integers and creates a Binary
 *              Search Tree (BST) by inserting each element from the array into
 *              the BST using the `bst_insert` function. It returns a pointer
 *              to the root node of the created BST. If the array is empty or
 *              the conversion fails, it returns NULL.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}

	return (root);
}
