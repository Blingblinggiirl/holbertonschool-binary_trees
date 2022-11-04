#include "binary_trees.h"
/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: pointer to the root node of the tree to count the number of nodes
 *Return: number of nodes with 1 child, 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		nodes += binary_tree_nodes(tree->left);

	if (tree->right != NULL)
		nodes += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (nodes + 1);
	else
		return (nodes);
}
