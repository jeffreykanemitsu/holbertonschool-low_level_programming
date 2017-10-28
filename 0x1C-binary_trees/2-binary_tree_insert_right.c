#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node
 * @value: value of new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *node;

        if (parent == NULL)
                return (NULL);
        node = malloc(sizeof(binary_tree_t));
        if (node == NULL)
                return (NULL);
        node->n = value;
        node->parent = parent;
        node->right = NULL;
        if (parent->right != NULL)
        {
                node->right = parent->right;
                parent->right = node;
                node->right->parent = node;
        }
        else
                parent->right = node;
        return (node);
}
