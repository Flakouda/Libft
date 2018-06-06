/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 17:07:45 by florientako       #+#    #+#             */
/*   Updated: 2018/05/03 17:09:33 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Convertis une lettre majuscule en lettre minuscule.
*/

int     ft_toupper(int c)
{
    return ((c > 96 && c < 123) ? c - 32 : c);
}