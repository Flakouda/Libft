/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 22:11:22 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 22:13:00 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Copies n octects de src sur dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;

	if (!n || dest == src)
		return (dest);
	a = (char *)dest;
	b = (char *)src;
	while (n)
	{
		*a = *b;
		a++;
		b++;
		n--;
	}
	return (dest);
}