#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 *
 * Description: This function checks if a binary tree is full recursively.
 * It recursively checks if each node in the tree has either zero or two children.
 * If any node has only one child or if the left and right subtrees are not full,
 * it returns 0. Otherwise, it returns 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
    if (tree != NULL)
    {
        if ((tree->left != NULL && tree->right == NULL) ||
            (tree->left == NULL && tree->right != NULL) ||
            is_full_recursive(tree->left) == 0 ||
            is_full_recursive(tree->right) == 0)
            return (0);
    }
    return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 *
 * Description: This function is the wrapper function for is_full_recursive.
 * It checks if the binary tree is NULL and then calls is_full_recursive
 * to determine if the tree is full. If the tree is NULL, it returns 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    return (is_full_recursive(tree));
}
