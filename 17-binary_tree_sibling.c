#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a binary tree
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node, or NULL if node has no sibling,
 *         node is NULL, or the parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/*Check if the input node or its parent is NULL*/
	if (node == NULL || node->parent == NULL)
	{

		/*Return NULL if the node or the parent is NULL*/
		return (NULL);
	}

	/*If the current node is the left child, return the right child*/
	if (node->parent->left == node)
	{
		/*Return the right child of the parent as the sibling*/
		return (node->parent->right);
	}

	/*Return the left child as the sibling*/
	return (node->parent->left);
}
