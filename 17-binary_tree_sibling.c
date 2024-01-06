#include "binary_trees.h"

/**
 * binary_tree_sibling - find the brother of the node
 * @node: argument_1 description
 * Return: return the node on the other branch (left or right)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}