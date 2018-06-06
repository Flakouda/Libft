/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 16:51:23 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 16:53:09 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Retourne 1 si l'int correspond a un charactere ascii, 0 sinon.
*/

int     ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}