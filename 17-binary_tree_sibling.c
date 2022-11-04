#include "binary_trees.h"
/**
 *binary_tree_sibling - finds the sibiling of a node
 *@node: Pointer to the node to find the sibiling
 *Return: pointer to the sibiling node, NULL if no sibiling or parent NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent != NULL)
	{
		if (node == node->parent->left)
			return (node->parent->right);
		if (node == node->parent->right)
			return (node->parent->left);
	}
	return (NULL);
}
