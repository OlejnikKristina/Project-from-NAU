/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BTree.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Kristina Oliinyk <0lejnikristina@gmail.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/01 12:32:49 by Kristina Ol    #+#    #+#                */
/*   Updated: 2019/12/01 12:32:49 by Kristina Ol   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_HPP
#define BTREE_HPP

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <sstream>

class				BTree
{
	public:

	struct			t_file_cab;
	struct			t_btree;

	struct t_btree	*root;
	int				N_LEAFS;
	int				COUNT;
	bool			USER_INPUT;

	BTree(void);
	~BTree(void);
	t_btree			*create_leaf(t_file_cab *data);
	void			insert_leaf(t_btree *root, t_file_cab *data);
	void			create_tree();
	void	 		rm_tree(t_btree *root);
	void 			print2DUtil(t_btree *root, int space);
	void			print2D(t_btree *root)  ;
	// void			pre_apply(t_btree *root, void (*apply_me)(int));
	// void			rm_tree(t_btree *root);
	// void			print_leaf_data(t_file_cab *item);

/******************* Aditional functions for work with BT ***********************/

	// int				nrooms_cmp(int room_n1, int room_n2);
	// void			print_leaf_int(int item);
	// void			*ft_memset(void *s, int c, unsigned int n);
	// void			ft_putchar(char c);
	private:
	t_file_cab		*add_file_cab_data(int = 10);
	bool			is_number(std::string str);
	int				get_room_number();
	void			*ft_memset(void *s, int c, unsigned int n);
};

struct				BTree::t_file_cab
{
	int				room_n;
	int				floor_n;
	float			square;
	char			*address;
};

struct				BTree::t_btree
{
	struct t_btree	*prev;
	struct t_btree	*left;
	struct t_btree	*right;
	t_file_cab		*data;
};



#endif
