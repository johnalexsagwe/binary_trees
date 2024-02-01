#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree using pre-order method.
 * @tree: Pointer to the root node for traversal.
 * @func: Pointer to a function to apply to each node.
 *        (Function should take an integer argument.)
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
