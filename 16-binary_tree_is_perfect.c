#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
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
	int b;

	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Measure the height of the left and right subtrees */
	height_left = (int)binary_tree_height(tree->left);
	height_right = (int)binary_tree_height(tree->right);

	/* Check if the left and right subtrees have the same height */
	if (height_left != height_right)
		return (0);

	b = binary_tree_is_perfect(tree->left);
	return (b && binary_tree_is_perfect(tree->right));
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Recursively measure the height of the left and right subtrees */
	if (tree->left != NULL)
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		height_right = 1 + binary_tree_height(tree->right);

	/* Return the greater of the two heights */
	return ((height_left > height_right) ? height_left : height_right);
}
