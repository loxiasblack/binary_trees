#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - function that count...
 * @tree: the root
 * Return: the count
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;
	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		count++;
	}
	left =  binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	count += left;
	count += right;
	return (count);
}
