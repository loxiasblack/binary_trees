#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - function that search your uncle
 * @node: the node to search his uncle
 * Return: the uncle node or nil otherwise
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
