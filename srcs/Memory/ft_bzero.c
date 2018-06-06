/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 21:34:39 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 21:44:44 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Copie un nombre de n d'octets zero sur la chaine s.
*/ 

void	ft_bzero(void *s, size_t n)
{
	while (n--)
	{
		*(char *)s = '\0';
		s++;
	}
}