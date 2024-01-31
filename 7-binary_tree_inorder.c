#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: This function traverses a binary tree using in-order traversal,
 * which means it processes the left subtree, then the current node, and finally
 * the right subtree. It recursively applies the specified function to each node
 * in the tree. The function pointer @func should be a pointer to a function that
 * takes an integer argument and returns void. It's called for each node in the
 * tree, with the node's value as the argument.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    // Check if the tree pointer and function pointer are not NULL
    if (tree && func)
    {
        // Recursively traverse the left subtree
        binary_tree_inorder(tree->left, func);

        // Call the specified function for the current node's value
        func(tree->n);

        // Recursively traverse the right subtree
        binary_tree_inorder(tree->right, func);
    }
}
