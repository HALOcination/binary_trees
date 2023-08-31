#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures the height of a binary tree
 * @tree: root node of the tree to measure the height
 *
 * BY HALO
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
		else
	{
		if (tree)
		{
		left = tree->left ?
			1 + binary_tree_height_b(tree->left) : 1;
		right = tree->right ?
			1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((left > right) ? left : right);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node of the tree to measure the balance factor
 *
 * BY HALO
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, sum = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		sum = left - right;
	}
	return (sum);
}
