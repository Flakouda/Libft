/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:53:32 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 17:04:27 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Retourne une section de s qui commence a start et finis a len.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char*)malloc(sizeof(*str) * len + 1);
	if (!str)
		return (0);
	i = -1;
	while (++i < (int)len && s[start])
	{
		str[i] = s[start];
		start++;
	}
	str[i] = 0;
	return (str);
}