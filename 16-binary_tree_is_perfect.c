#include "binary_trees.h"

/**
 * tree_is_perfect - checks if tree is perfect
 * @tree: pointer to tree
 *
 * BY HALO
 * Return: if not perfect 0
 */

int tree_is_perfect(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree->left && tree->right)
	{
		right = 1 + tree_is_perfect(tree->right);
		left = 1 + tree_is_perfect(tree->left);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * BY HALO
 * Return: 1 if perfect, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int issue = 0;

	if (tree == NULL)
	{
		return (0);
	}
		else
	{
		issue = tree_is_perfect(tree);
		if (issue != 0)
		{
			return (1);
		}

		return (0);
	}
}
