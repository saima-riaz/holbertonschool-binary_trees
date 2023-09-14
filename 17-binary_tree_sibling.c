#include "binary_trees.h"
/**
 * binary_tree_sibling - Find the sibling of a node in a binary tree.
 * @node: A pointer to the node for which to find the sibling.
 *
 * Return: A pointer to the sibling node. If node is NULL, the parent is NULL,
 * or there is no sibling, return NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)

		return (NULL);

	parent = node->parent;

	if (parent->left == node)


		return (parent->right);

	else if (parent->right == node)

		return (parent->left);

	else
	{
		return (NULL);
	}
}
