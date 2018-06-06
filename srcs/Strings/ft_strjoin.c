/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 11:54:26 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 16:45:12 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Alloue la memoire suffisante pour joindre s2 a la fin de s1, joint les deux, et retourne la nouvelle string. 
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size1;
	size_t	size2;

	size1 = 0;
	size2 = 0;
	s1 ? size1 = ft_strlen(s1) : 0;
	s2 ? size2 = ft_strlen(s2) : 0;
	str = malloc(size1 + size2 + 1);
	if (!str)
		return (NULL);
	s1 ? ft_strcpy(str, s1) : 0;
	s2 ? ft_strcpy(&str[size1], s2) : 0;
	return (str);
}