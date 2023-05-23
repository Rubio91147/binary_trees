#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_trees_t, binary_tree_insert_left - Tree
 *  structure representing left child
 * @parent: the parent of the tree structure
 * @value: the value of the tree structure
 *
 * Return: 0.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);

if (parent->left != NULL)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}

parent->left = new_node;
return (new_node);
}
