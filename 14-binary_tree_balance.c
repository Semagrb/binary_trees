#include "binary_trees.h"

/**
 * binary_tree_balance - finding balance factor
 * @tree: tree
 * Return: the balance factor (including zero)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
 * binary_tree_height - the height of a tree
 * @tree: tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_len, right_len;

	if (tree)
	{
		left_len = 0;
		right_len = 0;

		if (tree->left)
			left_len = 1 + binary_tree_height(tree->left);

		if (tree->right)
			right_len = 1 + binary_tree_height(tree->right);

		if (left_len > right_len)
        {
            return (left_len);
        }

        return (right_len);
	}
	else
		return (-1);

	return (0);
}