#include "binary_trees.h"
/**
 * binary_tree_leaves - Count the number of leaf nodes in a binary tree.
 * @tree: A pointer to the root node of the tree to count leaves.
 *
 * Return: The number of leaf nodes. If tree is NULL, return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)

{
	size_t left_leaves;
	size_t right_leaves;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
