#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - function that check if
 * the node is the root
 * @node: the node to check
 * Return: 1 if it is the root or 0 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	return (1);
}
