#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL on failure
 * or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = create_node(value);
	if (new == NULL)
		return (NULL);
	while (parent->right)
	{
		if (parent->right->n > value)
		{
			parent->right->parent = new;
			break;
		}
		parent = parent->right;
	}
	new->parent = parent;
	new->right = parent->right;
	parent->right = new;
	return (new);
}

/**
 * create_node - creates new node
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL on failure
 */

binary_tree_t *create_node(int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
