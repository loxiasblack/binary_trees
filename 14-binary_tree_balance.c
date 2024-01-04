#include <stdlib.h>
#include "binary_trees.h"

int height(const binary_tree_t *tree);
/**
 * binary_tree_balance - function that count
 * the balance between the left and right height
 * @tree: the root node
 * Return: the balance factor of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}
	left = height(tree->left);
	right = height(tree->right);
	return (left - right);
}
/**
 * height - function that count the height
 * @tree: the root node
 * Return: the max height between left and right
*/
int height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}
	left = height(tree->left);
	right = height(tree->right);
	return (((left > right) ? left : right) + 1);
}
