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

BTree::t_btree	* BTree::create_leaf(t_file_cab *data)
{
	t_btree		*leaf;

	leaf = new t_btree[1];
	if (!leaf)
		return (NULL);
	leaf->data = data;
	leaf->right = nullptr;
	leaf->left = nullptr;
	leaf->prev = nullptr;
	return(leaf);
}
