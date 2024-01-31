#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 *
 * Description: This function measures the balance factor of a binary tree.
 * The balance factor of a node is calculated as the difference between
 * the height of its left subtree and the height of its right subtree.
 * If tree is NULL, it returns 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree)
        return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
    return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 *
 * Description: This function measures the height of a binary tree.
 * The height of a node is defined as the length of the longest path
 * from the node to a leaf. If tree is NULL, it returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree)
    {
        size_t l = 0, r = 0;

        l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
        r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
        return ((l > r) ? l : r);
    }
    return (0);
}