#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_size - function that count the size
 * of the tree
 * @tree: the root node
 * Return: the size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (left + right + 1);
}
