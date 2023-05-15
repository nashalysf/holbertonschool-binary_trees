#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor in tree
 * @tree: pointer to root of node tree to measure balance
 * Return: 0. if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_b = 0;
	size_t right_b = 0;

	if (tree == NULL)
		return (0);

	left_b = binary_tree_height(tree->left);
	right_b = binary_tree_height(tree->right);

	return (left_b - right_b);
}
/**
 * binary_tree_height - function that measures height
 * @tree: pointer to root node of tree to be measured
 * Return: biggest
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	left_h += 1 + binary_tree_height(tree->left);
	right_h += 1 + binary_tree_height(tree->right);

	if (left_h > right_h)
		return (left_h);

	return (right_h);
}
