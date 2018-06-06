/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:54:05 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:55:02 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Copie len charactere de src dans dst, si src < len, remplie dst avec des \0.
*/

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (n--)
	{
		dest[j] = src[i];
		if (src[i])
			i++;
		else
			dest[j] = '\0';
		j++;
	}
	return (dest);
}