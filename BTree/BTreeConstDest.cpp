/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   BTreeCreateLeaf.cpp                                                      */
/*                                                                            */
/*   By: Kristina Oliinyk <0lejnikristina@gmail.                              */
/*                                                                            */
/*   Created: 2019/12/01 14:01:13 by Kristina Ol                              */
/*   Updated: 2019/12/01 14:01:13 by Kristina Ol                              */
/*                                                                            */
/* ************************************************************************** */

#include "../BTree.hpp"

BTree::BTree(void)
{
	t_file_cab	*data;

	USER_INPUT = false;
	data = add_file_cab_data();
	root = new t_btree[1];
	root = create_leaf(data);
}

BTree::~BTree(void)
{
	// delete root->data;
	// delete root;
	rm_tree(root);
	delete root->data;
	root->data = nullptr;
	delete root;
}

