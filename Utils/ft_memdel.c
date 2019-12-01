/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Kristina Oliinyk <0lejnikristina@gmail.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 16:58:25 by Kristina Ol    #+#    #+#                */
/*   Updated: 2019/11/30 16:58:25 by Kristina Ol   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_memdel(void **ap)
{
	if (!*ap)
		return ;
	free(*ap);
	*ap = NULL;
}
