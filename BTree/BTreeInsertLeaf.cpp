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
	int				pre_room;
	int				new_room;

	pre_room = root->data->room_n;
	new_room = data->room_n;
	if (new_room < pre_room && root->right && printf("Go right\n"))
		insert_leaf(root->right, data);
	else if (new_room > pre_room && root->left && printf("Go left\n"))
		insert_leaf(root->left, data);
	else
	{
		if (new_room < pre_room)
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

void	BTree::create_tree()
{
	int rooms_num[7] = {6,25,1,8,20,30,21};
	t_file_cab		*data;

	data = add_file_cab_data();
	//std::cout << "DATA: " << data->room_n << '\n';
	insert_leaf(root, data);
	
	// for (int i = 0; i < N_LEAFS; i++)
	// {

	// }
	// while ()
	// {
	// 	/* code */
	// }
}

int		main()
{
	BTree my_tree;

	std::cout << "Room Num: " \
	<< my_tree.root->data->room_n << '\n';

	my_tree.create_tree();
	//std::cout << my_tree.root->left->data->room_n;
	return(0);
}