/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BTreeAddFileCabData.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: Kristina Oliinyk <0lejnikristina@gmail.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/01 23:04:57 by Kristina Ol    #+#    #+#                */
/*   Updated: 2019/12/01 23:04:57 by Kristina Ol   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "../BTree.hpp"

bool				BTree::is_number(std::string str)
{
	int	i;
	int	len;

	i = 0;
	len = str.length();
	while (i < len)
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else 
			return (false);
	}
	return (true);
}

int					BTree::get_room_number()
{
	std::string		room_num_str;
	int				room_num_digit;

	std::cout << "Enter room number: ";
	std::cin >> room_num_str;
	std::stringstream to_number(room_num_str);
	if (!is_number(room_num_str))
	{
		std::cout << "Finished to enter room numbers\n";
		return (-1);
	}
	to_number >> room_num_digit;
	return (room_num_digit);
}

BTree::t_file_cab*	BTree::add_file_cab_data(int room_num)
{
	t_file_cab 		*data;
	
	data = new t_file_cab[1];
	data->room_n = (USER_INPUT) ? get_room_number() : room_num;
	if (data->room_n == -1)
	{
		delete data;
		return (NULL);
	}
	return (data);
}