/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 21:55:53 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 22:02:31 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Trouve c dans s, retourne un pointeur sur c.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	i;
	unsigned char	*str;

	i = (unsigned char)c;
	str = (unsigned char *)s;
	while (n)
	{
		if (*str == i)
			return (str);
		n--;
		str++;
	}
	return (NULL);
}