#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - function that search your uncle
 * @node: the node to search his uncle
 * Return: the uncle node or nil otherwise
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *Grandparent;

	if (node == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	Grandparent = node->parent->parent;
	if (Grandparent->left == node->parent)
	{
		return (Grandparent->right);
	}
	else
	{
		return (Grandparent->left);
	}
}
