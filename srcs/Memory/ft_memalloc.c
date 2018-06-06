/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 21:43:28 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 21:45:02 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Alloue un nouvel espace memoire vide.
*/

void	*ft_memalloc(size_t size)
{
	void	*tab;

	tab = (void*)malloc(sizeof(tab) * size);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, size);
	return (tab);
}