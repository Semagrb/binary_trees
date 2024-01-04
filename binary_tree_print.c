#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * print_tree - Helper function to print a binary tree recursively.
 *
 * @tree: Pointer to the node to print.
 * @level: Level of the current node in the tree.
 */
static void print_tree(const binary_tree_t *tree, int level)
{
    if (tree == NULL)
        return;

    print_tree(tree->right, level + 1);

    for (int i = 0; i < level; i++)
        printf("    ");

    printf("(%03d)\n", tree->n);

    print_tree(tree->left, level + 1);
}

/**
 * binary_tree_print - Prints a binary tree.
 *
 * @tree: Pointer to the root node of the tree to print.
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    print_tree(tree, 0);
}
