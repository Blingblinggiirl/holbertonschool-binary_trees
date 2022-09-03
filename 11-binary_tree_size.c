#include "binary_trees.h"
/**
 *binary_tree_size - post-order traversal through a binary tree counts nodes.
 *@tree: Pointer to tree.
 *Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
