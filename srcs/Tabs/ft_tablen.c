/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 16:02:22 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 16:50:50 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Retourne la taille d'un tableau.
*/

size_t  ft_tablen(const void *tab)
{
    size_t  size;

    size = 0;
    while (((void **)tab)[size] != NULL)
        size++;
    return(size);
}
