#include "binary_trees.h"

/**
 * binary_tree_t - For creating a new node
 * @parent: the pointer to the node to insert the left child
 * @value: value to put in the new node 
 * Description: If parent has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 *Return: if parent is NULL return NULL
*         else return new node 
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
