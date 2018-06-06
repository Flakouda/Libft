/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:53:55 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:57:17 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Alloue size octects d'une nouvelle string, retourne la nouvelle string.
*/

char	*ft_strnew(size_t size)
{
	char	*tab;

	tab = (char *)malloc(sizeof(*tab) * (size + 1));
	if (!tab)
		return (NULL);
	if (!size)
		return (tab);
	ft_bzero(tab, size + 1);
	return (tab);
}