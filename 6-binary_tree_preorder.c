#include "binary_trees.h"

/**
 * binary_tree_preorder - create a binary
 * tree from a un preorder tree
 * @tree: preorder tree
 * @func: - function to pointer to preorder tree
 *
 * Return: 0.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return; /* If tree or func is NULL, do nothing */


/* Call the function for the current node */
func(tree->n);

/* Traverse the left subtree recursively */
binary_tree_preorder(tree->left, func);

/* Traverse the right subtree recursively */
binary_tree_preorder(tree->right, func);
}
