/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 17:00:44 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 17:06:56 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Convertis une lettre majuscule en lettre minuscule
*/

int     ft_tolower(int c)
{
    return ((c > 64 && c < 91) ? c + 32 : c);
}