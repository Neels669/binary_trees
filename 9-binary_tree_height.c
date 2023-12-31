#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hr, hl;

	if (!tree)
		return (0);
	hr = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;
	hl = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
	if (hr >= hl)
		return (hr);
	else
		return (hl);
}
