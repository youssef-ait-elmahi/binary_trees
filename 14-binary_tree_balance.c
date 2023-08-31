#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the tree. If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Measure the height of the left and right subtrees */
	height_left = (int)binary_tree_height(tree->left);
	height_right = (int)binary_tree_height(tree->right);

	/* Return the difference between the two heights */
	return (height_left - height_right);
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
