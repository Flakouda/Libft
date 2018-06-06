/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:54:45 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:39:48 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Copie src dans dst.
*/

char	*ft_strcpy(char *dest, const char *src)
{
	int		length;

	length = -1;
	while (src[++length])
		dest[length] = src[length];
	dest[length] = '\0';
	return (dest);
}