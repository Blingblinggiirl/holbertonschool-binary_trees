#include "binary_trees.h"
/**
 * binary_tree_is_root - cheacks if a given node is a root
 * @node: is pointer to the to check
 * Return: 1 if its root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent != NULL)
		return (0);
	else
		return (1);
}
