#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL on failure
 * or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = create_node(value);
	if (new == NULL)
		return (NULL);
	while (parent->left)
	{
		if (parent->left->n < value)
		{
			parent->left->parent = new;
			break;
		}
		parent = parent->left;
	}
	new->parent = parent;
	new->left = parent->left;
	parent->left = new;
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
