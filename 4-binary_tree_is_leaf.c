#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that check if my node
 * is leaf
 * @node: the node to check in my tree
 * Return: 1 is leaf or 0 if not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	if (node == NULL)
		return (0);
	return (1);
}
