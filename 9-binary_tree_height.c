#include "binary_trees.h"
/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height.
 *Return: max height, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int Lheight = 0;
	int Rheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		Lheight = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		Rheight = 1 + binary_tree_height(tree->right);

	if (Lheight > Rheight)
		return (Lheight);
	else
		return (Rheight);
}
