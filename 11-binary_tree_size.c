#include "binary_trees.h"
/**
 * binary_tree_size - measures size of tree
 * @tree: pointer to node root of tree to measure
 * Return: Always 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	/* measures height */
	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);

	return (size + 1);
}
