#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0; if node is NULL, return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*Check if the node is NULL*/
	if (node == NULL)
		return (0);

	/*Check if the left child of the node is NULL*/
	if (node->left == NULL && node->right == NULL)
		/*If the node is a leaf return 1*/
		return (1);

	/*If the node is not a leaf return 0*/
	return (0);
}
