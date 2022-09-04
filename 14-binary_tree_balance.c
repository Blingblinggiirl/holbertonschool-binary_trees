#include "binary_trees.h"
/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance factor
 *Return: balance factor, 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int counter_l = 0, counter_r = 0;

	if (tree == NULL)
		return (0);

	counter_l = binary_tree_height(tree->left);

	counter_r = binary_tree_height(tree->right);

	return (counter_l - counter_r);
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
