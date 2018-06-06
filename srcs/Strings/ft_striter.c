/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:54:31 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:44:04 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Applique la fonction f sur tout les characteres de s.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(&s[i]);
}