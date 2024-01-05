#include "binary_trees.h"

/* Returns 1 if p is an ancestor of n, 0 otherwise */
int binary_trees_ancestor(const binary_tree_t *n, const binary_tree_t *p)
{
    if (!n)
        return 0;

    if (n == p)
        return 1;

    return binary_trees_ancestor(n->parent, p);
}
