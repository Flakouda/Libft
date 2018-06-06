/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:53:41 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 17:01:23 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Localise le "separateur" de c dans s, et retourne un tableau de string couper en fonction de c.
*/

static int		ft_nbmot(char const *s, char c)
{
	int		i;
	int		nb;

	nb = 0;
	i = -1;
	while (s[++i])
		if ((s[i] == c && s[i + 1] != c && s[i + 1]) || (i == 0 && s[i] != c))
			nb++;
	return (nb);
}

static int		ft_length(char const *s, char c, int p)
{
	int		i;
	int		j;

	i = 0;
	if (s[p] == c)
		p++;
	j = p;
	while (s[p] != c && s[p])
	{
		i++;
		p++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	tab = (char**)malloc(sizeof(*tab) * ft_nbmot(s, c) + 1);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			j = 1;
		else if ((s[i] == c && s[i + 1] != c) && (s[i + 1]))
			tab[j++] = ft_strsub(s, i + 1, ft_length(s, c, i));
		i++;
	}
	if (s[0] != c)
		tab[0] = ft_strsub(s, 0, ft_length(s, c, 0));
	tab[j] = 0;
	if (!tab)
		return (NULL);
	return (tab);
}