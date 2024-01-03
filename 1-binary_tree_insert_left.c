#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that insert a child in the left of
 * my parent node
 * @parent: parent node
 * @value: the int value that contain the node
 * Return: the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;
	parent->left = new_node;
	if (new_node->left != NULL)
	{
		new_node->left->parent = new_node;
	}
	return (new_node);
}
