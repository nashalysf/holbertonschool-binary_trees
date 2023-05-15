#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, or 0 if tree is NULL or tree has no parent
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/*Return 0 if tree is NULL or tree has no parent*/
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
    /*Calculate the depth of the parent node and increment by 1*/
	return (1 + binary_tree_depth(tree->parent));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/*Return 0 if tree is NULL */
	if (tree == NULL)
	{
		return (0);
	}
	/*Calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);
	/*Calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/*Return the maximum height of the subtrees, incremented by 1*/
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if is perfect, otherwise 0; if is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/*Return 0 if tree is NULL*/
	if (tree == NULL)
	{
		return (0);
	}
	int per_left = binary_tree_is_perfect(tree->left);
	int per_right = binary_tree_is_perfect(tree->right);

	/*If the current node is a leaf node, return 1*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/*If the current node has only one child, return 0*/
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	/*Check if the depths and heights of the left and right subtrees are equal*/
	if (binary_tree_depth(tree->left) == binary_tree_depth(tree->right) &&
		binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		/*If both subtrees are perfect, return 1*/
		return (per_left && per_right);
	}

	else
	{
		/*If the depths or heights of the subtrees are not equal, return 0*/
		return (0);
	}
}
