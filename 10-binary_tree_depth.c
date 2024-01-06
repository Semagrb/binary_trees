#include "binary_trees.h"

/**
 * binary_tree_depth - binary trees depth of nodes
 * @tree: child node to find parents lenght
 * Return: return the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *iter;
	size_t depth = 0;

	if (tree == NULL)
    {
		return (depth);
    }
	iter = (binary_tree_t*) tree;
	while (iter->parent)
	{
		depth++;
		iter = iter->parent;
	}
	return (depth);
}