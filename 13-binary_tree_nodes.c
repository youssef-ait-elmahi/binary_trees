#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes with at least 1 child. If tree is NULL, return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Check if tree is NULL or a leaf */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Recursively count the nodes in the left and right subtrees */
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
