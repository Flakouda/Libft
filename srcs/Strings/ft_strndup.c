/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:54:02 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:56:13 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Alloue de la memoire pour n charactere plus 1, copie n charactere de s dans cpy, retourne cpy.
*/

char				*ft_strndup(const char *s, size_t n)
{
	unsigned int	i;
	char			*cpy;

	if ((cpy = (char*)malloc(sizeof(*cpy) * (n + 1))) == 0)
		return (NULL);
	i = 0;
	while (*s && i < n)
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}