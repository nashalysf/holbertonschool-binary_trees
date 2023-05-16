#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if tree is full
 * @tree: pointer to root node to tree
 * Return: 1. for true and 0. for false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return(binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
