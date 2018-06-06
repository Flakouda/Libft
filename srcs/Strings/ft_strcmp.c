/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:54:48 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 13:44:10 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Compare s1 et s2, retourne la difference (en fonction de leur valeurs ascii).
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && s1[i] && s2[i])
		i++;
	return (((unsigned char)s1[i] != (unsigned char)s2[i]) ?
	((unsigned char)s1[i] - (unsigned char)s2[i]) : 0);
}