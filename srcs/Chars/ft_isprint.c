/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 16:54:34 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 16:56:09 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Retourne 1 si l'int correspond a un charactere visible, 0 sinon.
*/

int     ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}