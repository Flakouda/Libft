/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:53:59 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:56:41 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Compare n charactere de s1 et s2, si identique renvoie 1, sinon 0.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && n)
	{
		i++;
		n--;
	}
	return (((s1[i] == 0 && s2[i] == 0) || n == 0) ? 1 : 0);
}