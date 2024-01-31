#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 *
 * Description: This function determines if the specified node is a leaf
 * node in a binary tree by checking if it has no left or right child nodes.
 * If the node pointer is NULL or if it has any child nodes, the function
 * returns 0 (indicating that the node is not a leaf). Otherwise, it returns
 * 1 to indicate that the node is a leaf.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    // Check if the node pointer is NULL or if it has any child nodes
    if (node == NULL || node->left != NULL || node->right != NULL)
        return (0); // Node is not a leaf, so return 0

    return (1); // Node is a leaf, so return 1
}
