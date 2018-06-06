/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:54:53 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 13:32:03 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Assigne la valeur \0 a tout les characteres de s.
*/

void	ft_strclr(char *s)
{
	int i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		s[i] = 0;
}