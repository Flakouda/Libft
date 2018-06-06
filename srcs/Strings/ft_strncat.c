/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:54:12 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:52:53 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Ajoute n charactere de s2 a la fin de s1.
*/

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (dest[i])
		i++;
	while (src[++j] && n--)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}