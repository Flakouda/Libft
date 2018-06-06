/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:53:37 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 17:03:12 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Localise la premiere occurence de mot dans str.
*/

char	*ft_strstr(const char *str, const char *mot)
{
	int i;
	int j;
	int l;

	if (mot[0] == '\0')
		return ((char *)&str[0]);
	i = -1;
	while (str[++i])
	{
		l = i;
		j = 0;
		while (str[l] == mot[j] && str[l] && mot[j])
		{
			j++;
			l++;
		}
		if (!mot[j])
			return ((char *)&str[i]);
	}
	return (0);
}