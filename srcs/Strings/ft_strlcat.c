/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:54:23 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:48:36 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Ajoute src a la fin de dst, au maximum de size - 1.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int dst_len;
	unsigned int src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = -1;
	if (!size)
		return (dst_len);
	while (src[++i] && (dst_len + i) < (size - 1))
		dst[dst_len + i] = src[i];
	dst[dst_len + i] = '\0';
	if (dst_len > size)
		return (src_len + size);
	return (dst_len + src_len);
}