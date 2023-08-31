#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Measure the height of the left and right subtrees */
	height_left = (int)binary_tree_height(tree->left);
	height_right = (int)binary_tree_height(tree->right);

	/* Check if the left and right subtrees have the same height */
	if (height_left != height_right)
		return (0);

	/* Recursively check if the left and right subtrees are perfect */
	return (binary_tree_is_perfect(tree->left)\
	&& binary_tree_is_perfect(tree->right));
}
