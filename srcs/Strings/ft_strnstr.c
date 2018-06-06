/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:53:51 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:59:15 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Localise len characteres de mot dans str.
*/

char	*ft_strnstr(const char *str, const char *mot, size_t len)
{
	int i;
	int j;
	int k;
	int	l;

	i = -1;
	while (str[++i] && len)
	{
		l = len;
		k = i;
		j = 0;
		while (str[k] == mot[j] && str[k] && mot[j] && l--)
		{
			j++;
			k++;
		}
		if (!mot[j])
			return ((char *)&str[i]);
		len--;
	}
	return (0);
}