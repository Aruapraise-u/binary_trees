#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Description: If node is NULL, return 0
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0); /* Return 0 if node is NULL */
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1); /* Return 1 if the node is a leaf */
	}

	return (0); /* Return 0 if the node is not a leaf */
}
