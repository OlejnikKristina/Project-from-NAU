/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   BTreeInsertLeaf.cpp                                                      */
/*                                                                            */
/*   By: Kristina Oliinyk <0lejnikristina@gmail.                              */
/*                                                                            */
/*   Created: 2019/12/01 14:01:13 by Kristina Ol                              */
/*   Updated: 2019/12/01 14:01:13 by Kristina Ol                              */
/*                                                                            */
/* ************************************************************************** */

#include "../BTree.hpp"

void	BTree::insert_leaf(t_btree *root, t_file_cab *data)
{
	t_btree			*buff_leaf;
	int				room1;
	int				room2;

	room1 = root->data->room_n;
	room2 = data->room_n;
	if (room2 > room1 && root->right && printf("Go right\n"))
		insert_leaf(root->right, data);
	else if (room2 < room1 && root->left && printf("Go left\n"))
		insert_leaf(root->left, data);
	else
	{
		if (room2 < room1)
		{
			printf("create left\n");
			buff_leaf = root->left;
			root->left = create_leaf(data);
			root->left->left = buff_leaf;
		}
		else
		{
			printf("create right\n");
			buff_leaf = root->right;
			root->right = create_leaf(data);
			root->right->right = buff_leaf;
		}
	}
}
