/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 22:21:33 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 22:22:47 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Copie len fois l'octet c sur b.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	if (!n)
		return (s);
	str = (unsigned char *)s;
	while (n--)
	{
		*str = c;
		str++;
	}
	return (s);
}