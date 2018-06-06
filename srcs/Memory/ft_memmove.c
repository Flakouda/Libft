/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 22:18:57 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 22:19:44 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    copies len octect de src sure dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!len || dest == src)
		return (dest);
	if (dest <= src)
		ft_memcpy(dest, src, len);
	else
	{
		while ((long long)--len >= 0)
			*((char *)dest + len) = *((char *)src + len);
	}
	return (dest);
}