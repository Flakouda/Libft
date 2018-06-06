/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:54:09 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:53:16 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Compare n characteres de s1 et s2.
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*tab1;
	unsigned char	*tab2;

	if (!n)
		return (0);
	tab1 = (unsigned char *)s1;
	tab2 = (unsigned char *)s2;
	i = 0;
	while (tab1[i] == tab2[i] && n-- >= 2 && tab1[i] && tab2[i])
		i++;
	return ((tab1[i] != tab2[i]) ? (tab1[i] - tab2[i]) : 0);
}