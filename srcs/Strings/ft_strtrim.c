/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:53:07 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 17:06:08 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    retourne une cope de str sans whites spaces au debut et a la fin de str.
*/

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		n;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	if (j < 0)
	{
		str = (char*)malloc(sizeof(*str) * 1);
		*str = 0;
		return (str);
	}
	n = j - i + 1;
	str = ft_strsub(s, i, n);
	if (!str)
		return (NULL);
	return (str);
}