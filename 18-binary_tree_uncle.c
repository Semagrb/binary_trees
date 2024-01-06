#include "binary_trees.h"

/**
 * binary_tree_uncle - find the parents brothers to find out the uncle node
 * @node: node to find it's uncle
 * Return: return the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
    {
		return (NULL);
    }
	if (node->parent == NULL)
    {
		return (NULL);
    }
	if (node->parent->parent == NULL)
	{
        return (NULL);
    }
	if (node->parent->parent->left != node->parent)
    {
		return (node->parent->parent->left);   
    }

    return (node->parent->parent->right);
}