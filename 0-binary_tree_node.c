#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - Function that creat a node in binary tree
 * @parent: the parent node
 * @value: the int that contain the node
 * Return: the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node != NULL)
	{
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	return new_node;
}
