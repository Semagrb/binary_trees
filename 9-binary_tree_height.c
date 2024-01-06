#include "binary_trees.h"

/**
 * binary_tree_height - finding the height of the tree
 * @tree: tree root
 * Return: return longest branch lenght
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t length_left, length_right;

	if (!tree)
    {
		return (0);
    }

	length_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	length_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    if (length_left > length_right)
    {
        return (length_left);
    }

    return (length_right);
}