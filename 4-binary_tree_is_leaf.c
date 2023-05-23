#include "binary_trees.h"

/**
 * binary_tree_is_leaf - chekcs if a node is a leaf
 * @node: the node
 *
 * Return: true if binary tree
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->left == NULL && node->right == NULL)
return (1);

return (0);
}
