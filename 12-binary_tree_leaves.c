#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - function that count the leaves
 * @tree: is a root node
 * Return: the count of a node
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
