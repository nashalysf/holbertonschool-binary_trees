#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node to find uncle
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL)
		return (NULL);
	
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	
	return (node->parent->parent->left);
}
