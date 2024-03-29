#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new right-child node.
 * @parent: Pointer to the node for right-child insertion.
 * @value: Value for the new node.
 * Return: Pointer to created node on success NULL on failure or if parent NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
		new_node->parent = parent;
		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = NULL;
	}
	new_node->n = value;
	new_node->left = NULL;
	return (new_node);
}
