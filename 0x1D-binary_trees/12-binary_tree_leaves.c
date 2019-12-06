#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: pointer to the root node of a tree
 * Return: number of leaves in tree, if tree is NULL return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaf = (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
	return (leaf);
}
