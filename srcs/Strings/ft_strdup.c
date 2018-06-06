/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:54:40 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:41:55 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Alloue de la memoire pour copier s1, effectue la copie, et renvoie un pointeur sur celle-ci.
*/

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	i = -1;
	dest = (char*)malloc(sizeof(*dest) * (ft_strlen(s1) + 1));
	if (!dest)
		return (NULL);
	while (s1[++i])
		dest[i] = s1[i];
	dest[i] = s1[i];
	return (dest);
}