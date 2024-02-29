#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - Insert a node as right-child
 *                             in a binary tree.
 * @parent: pointer to the node to insert the right-child
 * @value: The value to put in new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         else - a pointer to the new node.
 *
 * Description: If parent has a right-child, the new node
 *              takes its place and to old right-child is set as
 *              the right-child of new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
