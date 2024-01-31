#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * Description: This function recursively deletes the binary tree
 * rooted at the specified node by first deleting its left subtree,
 * then its right subtree, and finally freeing the memory allocated
 * for the node itself. If the specified tree is NULL, no action
 * is taken.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree != NULL)
    {
        binary_tree_delete(tree->left);  // Recursively delete the left subtree
        binary_tree_delete(tree->right); // Recursively delete the right subtree
        free(tree);                      // Free memory allocated for the current node
    }
}
