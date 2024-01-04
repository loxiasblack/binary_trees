#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - function that check if my
 * binary tree is full
 * @tree: is the root node
 * Return: 1 if it's full or 0 if not
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if ((tree->left) && (tree->right))
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
