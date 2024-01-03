#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - function that count the
 * depth of node
 * @tree: the root
 * Return: the count
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
