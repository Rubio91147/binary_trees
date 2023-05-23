#include "binary_trees.h"

/**
 * binary_tree_inorder - create a binary
 * tree from a un preorder tree
 * @tree: preorder tree
 * @func: - function to pointer to preorder tree
 *
 * Return: 0.
*/



void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
/*Traverse the left subtree recursively*/
binary_tree_inorder(tree->left, func);

/*Call the function for the current node*/
func(tree->n);

/*Traverse the right subtree recursively*/
binary_tree_inorder(tree->right, func);
}
