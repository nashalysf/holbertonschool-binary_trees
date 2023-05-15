#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if the tree or func is NULL, if so do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* Call the function on the current node */
	func(tree->n);

	/* Traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
