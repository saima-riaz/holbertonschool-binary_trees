#include "binary_trees.h"
/**
 *binary_tree_is_leaf - fun check in a node is a leaf
 *@node: pointer to node to check
 *
 *Return: 1 if node is a leaf or 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
		return (0);
}
