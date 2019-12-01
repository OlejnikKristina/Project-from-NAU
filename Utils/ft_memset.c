/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: Kristina Oliinyk <0lejnikristina@gmail.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 17:02:04 by Kristina Ol    #+#    #+#                */
/*   Updated: 2019/11/30 17:02:04 by Kristina Ol   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
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
