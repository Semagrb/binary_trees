#include "binary_trees.h"

/**
 * binary_tree_nodes - nodes to be found
 * @tree: the tree
 * Return: return nodes number
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t num_of_nodes = 0;

	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
			num_of_nodes += 1;
		num_of_nodes += binary_tree_nodes(tree->left);
		num_of_nodes +=  binary_tree_nodes(tree->right);
	}
	return (num_of_nodes);
}