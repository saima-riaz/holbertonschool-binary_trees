#include "binary_trees.h"

/**
 *binary_tree_insert_left - fun that create a left child to binary tree
 *@parent: pointer to new node to insert left child in
 *@value: to put in the new left node
 *
 *Return: new left node or NUll (if failed)
 */

/* Function to insert a node as the left child of another node */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
		/* Cannot insert a left child if the parent is NULL*/
	}
	/* Create a new node for the left child */
	new_left_node = malloc(sizeof(binary_tree_t));

	if (new_left_node == NULL)
	{
		return (NULL);
		/* Memory allocation failed*/
	}
	/* Initialize the new node */
	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node->left = parent->left;
	/* Set the old left-child as the new node's left child */
	new_left_node->right = NULL;
	/* No right child for the new node */
	if (parent->left != NULL)
	{
		parent->left->parent = new_left_node;
		/* Update the old left-child's parent pointer */
	}
	parent->left = new_left_node;
	/* Set the new node as the left child of the parent */
	return (new_left_node);
}
