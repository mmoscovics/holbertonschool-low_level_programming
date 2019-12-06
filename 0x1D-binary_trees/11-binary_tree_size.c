#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary tree
 * @tree: pointer to root node of tree
 * Return: size of tree, if tree is NULL return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return 0;
	size = (binary_tree_size(tree->left) + 1 +
		binary_tree_size(tree->right));
	return (size);
}
