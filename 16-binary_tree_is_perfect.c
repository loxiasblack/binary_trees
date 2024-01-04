#include <stdlib.h>
#include "binary_trees.h"
#include <stdbool.h>

/**
 * depth - count the depth
 * @node: the root node
 * Return: the count
*/
int depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}
/**
 * count_nodes - function that count the nodes
 * @tree: the root node
 * Return: the count
*/
int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
/**
 * binary_tree_is_perfect - function that check if
 * the tree is perfect
 * @tree: the root node
 * Return: 1 if it's perfect or 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);
	int n = count_nodes(tree);

	return (n == (1 << d) - 1);
}
