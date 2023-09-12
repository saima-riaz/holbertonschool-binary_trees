#include "binary_trees.h"

/**
 *binary_tree_insert_right - fun that create a right child to binary tree
 *@parent: pointer to new node to insert right child in
 *@value: to put in the new right node
 *
 *Return: new right node or NUll (if failed)
 */

/* Function to insert a node as the right child of another node */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
		/* Cannot insert a left child if the parent is NULL*/
	}
	/* Create a new node for the left child */
	new_right_node = malloc(sizeof(binary_tree_t));

	if (new_right_node == NULL)
	{
		return (NULL);
		/* Memory allocation failed*/
	}
	/* Initialize the new node */
	new_right_node->n = value;
	new_right_node->parent = parent;
	new_right_node->right = parent->right;
	/* Set the old left-child as the new node's left child */
	new_right_node->left = NULL;
	/* No right child for the new node */
	if (parent->right != NULL)
	{
		parent->right->parent = new_right_node;
		/* Update the old left-child's parent pointer */
	}
	parent->right = new_right_node;
	/* Set the new node as the left child of the parent */
	return (new_right_node);
}
