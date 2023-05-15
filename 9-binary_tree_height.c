#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the
 * height of the tree
 * @tree: pointer to root node of tree to be measured
 * Return: 0. (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* init height of left and right to 0. */
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);
	/* checks for left branches and if so it adds one to left counter */
	if (tree->left)
		left_h += 1 + binary_tree_height(tree->left);

	/* checks for right branches and if so it adds one to right counter */
	if (tree->right)
		right_h += 1 + binary_tree_height(tree->right);

	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);
}
