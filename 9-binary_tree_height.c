#include <stdlib.h>
#include "binary_trees.h"
int max(int num1, int num2);
/**
 * binary_tree_height - function that count
 * the max height of the tree
 * @tree: the root node
 * Return: the count
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (max(left, right) + 1);
}
/**
 * max - function that return
 * the max between two number
 * @num1: number one
 * @num2: number two
 * Return: the max
*/
int max(int num1, int num2)
{
	return ((num1 > num2) ? num1 : num2);
}
