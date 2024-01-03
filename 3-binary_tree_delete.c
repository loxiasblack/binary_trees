#include <stdlib.h>
#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
    while (tree->left)
    {
        free(tree->left);
        free(tree->left->right);
        tree->left = tree->left->left;
    }
    while (tree->right)
    {
        free(tree->right);
        free(tree->right->left);
        tree->right = tree->right->right;
    }
    
    free(tree);
}