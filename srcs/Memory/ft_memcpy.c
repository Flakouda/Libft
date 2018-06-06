/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 21:45:24 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 21:48:48 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Copie src sur dst jusqu'a que c soit trouvee, on retourne un pointeur sur dst une fois c trouvee.
*/

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dst;
	unsigned char	*src;
	unsigned char	x;

	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((*dst++ = *src++) == x)
			return (dst);
		i++;
	}
	return (NULL);
}