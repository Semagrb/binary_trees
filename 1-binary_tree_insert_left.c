#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 *
 * Description: If parent is NULL or an error occurs - NULL.
 *              Otherwise - a pointer to the new node.
 *              If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (!parent)
        return (NULL);

    new_node = binary_tree_node(parent, value);

    if (!new_node)
        return (NULL);

    if (parent->left)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    parent->left = new_node;

    return (new_node);
}
