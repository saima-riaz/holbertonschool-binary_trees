#include "binary_trees.h"
/**
<<<<<<< HEAD
 * binary_tree_preorder - Perform pre-order traversal on a binary tree.
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;  
	}

	func(tree->n);

	binary_tree_preorder(tree->left, func);

=======
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
>>>>>>> fca3b6464a972f43ca0d06a214a921452c44214e
	binary_tree_preorder(tree->right, func);
}
