#include "binary_trees.h"
/**
 *binary_tree_inorder - goes through a binary tree using in-order traversal 
 *@tree: a pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node, and the parameter value. 
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
