/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BTreeDisplay.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: Kristina Oliinyk <0lejnikristina@gmail.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/02 00:41:58 by Kristina Ol    #+#    #+#                */
/*   Updated: 2019/12/02 00:41:58 by Kristina Ol   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../BTree.hpp"
#include <bits/stdc++.h>

#define COUNT 10

// Function to print binary tree in 2D  
// It does reverse inorder traversal  
void BTree::print2DUtil(t_btree *root, int space)  
{
	// Base case  
	if (root == NULL)  
		return;  

	// Increase distance between levels
	space += COUNT;

	// Process right child first
	print2DUtil(root->right, space);

	// Print current node after space
	std::cout << std::endl;
	for (int i = COUNT; i < space; i++)
		std::cout << " ";
	std::cout << '[' << root->data->room_n << "]\n";

	// Process left child
	print2DUtil(root->left, space);
}

// Wrapper over print2DUtil()
void	BTree::print2D(t_btree *root)
{
	// Pass initial space count as 0
	print2DUtil(root, 0);
}
