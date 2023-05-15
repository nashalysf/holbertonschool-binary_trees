#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0; if node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	/* Check if the node is NULL, if so return 0 */
	if (node == NULL)
		return (0);

	/* Check if the node's parent is NULL, if so it's a root node */
	if (node->parent == NULL)
		return (1);

	/* If the node has a parent, it's not a root node */
	return (0);
}
