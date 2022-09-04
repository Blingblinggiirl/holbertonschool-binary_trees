#include "binary_trees.h"

/**
 *binary_tree_is_perfect - checks if a BT is perfect.
 *@tree: Pointer to tree.
 *Return: 1 for perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));

	return (0);
}
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

	Lheight = 1 + binary_tree_height(tree->left);
	Rheight = 1 + binary_tree_height(tree->right);

	if (Lheight > Rheight)
		return (Lheight);
	else
		return (Rheight);
}
