#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a root - 1.
 *         Otherwise - 0.
 *
 * Description: This function determines if the specified node is the root
 * node of a binary tree by checking if it has no parent node. If the node
 * pointer is NULL or if it has a parent node, the function returns 0
 * (indicating that the node is not a root). Otherwise, it returns 1 to
 * indicate that the node is a root.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    // Check if the node pointer is NULL or if it has a parent node
    if (node == NULL || node->parent != NULL)
        return (0); // Node is not a root, so return 0

    return (1); // Node is a root, so return 1
}
