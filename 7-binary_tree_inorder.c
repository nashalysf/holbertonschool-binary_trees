#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if the tree or func is NULL, if so do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* Traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/*Callthe function on the current node*/
	func(tree->n);

	/* Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}

