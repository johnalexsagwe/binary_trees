#include "binary_trees.h"

/**
  * binary_tree_height - this measures the height of a tree
  *
  * @tree: this is a pointer to the root of the node to be measured
  * Return: this returns the height on success and 0 if tree is NULL
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
	{
		if (tree->left != NULL)
			return (left + 1);
	}
	else
	{
		if (tree->right != NULL)
			return (right + 1);
	}
	return (0);
}
