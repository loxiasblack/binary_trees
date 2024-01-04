#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - function that find
 * the sibling of node
 * @node: the node to find he's siblings
 * Return: Null or the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
