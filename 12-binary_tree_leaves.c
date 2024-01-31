#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 *
 * Description: This function counts the number of leaves in a binary tree.
 * A leaf node is a node that has no children (both left and right pointers are NULL).
 * It recursively traverses the tree and increments the count for each leaf node.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    // Variable to store the number of leaves
    size_t leaves = 0;

    // Check if the tree pointer is not NULL
    if (tree)
    {
        // Increment leaves by 1 if the current node is a leaf node
        leaves += (!tree->left && !tree->right) ? 1 : 0;

        // Recursively count the leaves in the left subtree
        leaves += binary_tree_leaves(tree->left);

        // Recursively count the leaves in the right subtree
        leaves += binary_tree_leaves(tree->right);
    }

    // Return the total number of leaves in the tree
    return (leaves);
}
