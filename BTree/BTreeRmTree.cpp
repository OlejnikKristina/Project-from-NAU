/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_rm_tree.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Kristina Oliinyk <0lejnikristina@gmail.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 16:52:06 by Kristina Ol    #+#    #+#                */
/*   Updated: 2019/11/30 16:52:06 by Kristina Ol   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../BTree.hpp"

void	*BTree::ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*hui;

	i = 0;
	hui = (unsigned char *)s;
	while (i < n)
	{
		hui[i] = (unsigned char)c;
		i++;
	}
	return (s);
}


void	 BTree::rm_tree(t_btree *root)
{
	if (root->left)
		rm_tree(root->left);
	if (root->right)
		rm_tree(root->right);
	delete root->data;
	ft_memset((void *)&(root->data), '\0', sizeof(root->data));
	root->data = nullptr;
	ft_memset((void *)root, '\0', sizeof(root));
	delete root;
}
