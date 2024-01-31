#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    // If node is NULL or it doesn't have a parent, return NULL (no sibling)
    if (node == NULL || node->parent == NULL)
        return (NULL);

    // If node is the left child of its parent, return the right child
    if (node->parent->left == node)
        return (node->parent->right);

    // If node is the right child of its parent, return the left child
    return (node->parent->left);
}
