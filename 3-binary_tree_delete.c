#include "binary_trees.h"

/** binary_tree_delete - the binary tree too be deletec
 *
 * @tree: pointer to the node node to be deleted
 * 
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
