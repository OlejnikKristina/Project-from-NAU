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

BTree::t_file_cab*		BTree::add_file_cab_data()
{
	t_file_cab *data;

	data = new t_file_cab[1];
	// std::cout << "Enter room number:" << '\n';
	// std::cin >> data->room_n;
	data->room_n = 100;
	return (data);
}

BTree::BTree(void)
{
	t_file_cab	*data;

	std::cout << "Constructor calld\n";
	data = add_file_cab_data();
	this->root = new t_btree[1];
	this->root = create_leaf(data);
}

BTree::~BTree(void)
{
	delete this->root->data;
	delete this->root;
	std::cout << "Destructor calld\n";
}

void 	BTree::hello()
{
	std::cout << "Hello!!!\n";
}

int		main()
{
	BTree my_tree;

	// std::cout << "Hello World! " << my_tree->root << '\n';
	// my_tree->hello();
	return(0);
}
