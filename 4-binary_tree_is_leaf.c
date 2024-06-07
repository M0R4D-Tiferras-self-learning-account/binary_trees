#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node to a binary tree is leaf
 *
 * @node: node to check
 *
 * Return: 1 if leaf and 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
