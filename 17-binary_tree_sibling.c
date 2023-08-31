#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node. If node is NULL or the parent is NULL,
 * or if node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if node or its parent is NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Check if node is the left child of its parent */
	if (node->parent->left == node)
		return (node->parent->right);

	/* Node is the right child of its parent */
	return (node->parent->left);
}
