#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 *
 * Description: This function measures the height of a binary tree. The height
 * of a binary tree is defined as the length of the longest path from the root
 * node to a leaf node. It recursively calculates the height of the left and
 * right subtrees and returns the maximum of the two heights, plus 1 (to account
 * for the current node).
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    // Check if the tree pointer is not NULL
    if (tree)
    {
        // Variables to store the height of the left and right subtrees
        size_t l = 0, r = 0;

        // Recursively calculate the height of the left subtree
        l = tree->left ? 1 + binary_tree_height(tree->left) : 0;

        // Recursively calculate the height of the right subtree
        r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

        // Return the maximum height of the left and right subtrees, plus 1
        return ((l > r) ? l : r);
    }
    // If the tree is NULL, return 0
    return (0);
}
