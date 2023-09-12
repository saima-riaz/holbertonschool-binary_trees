#include "binary_trees.h"
/**
 * binary_tree_delete - delete tree
 * @tree: tree to delete
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree) {
	if (tree == NULL) {
		return; // If tree is NULL, do nothing
	}

	// Delete the left subtree
	binary_tree_delete(tree->left);

	// Delete the right subtree
	binary_tree_delete(tree->right);

	// Free the memory of the current node
	free(tree);
}
