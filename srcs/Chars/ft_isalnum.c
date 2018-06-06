/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 16:34:38 by florientako       #+#    #+#             */
/*   Updated: 2018/05/14 10:45:52 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    retourne 1 si l'int correspond a un charactere numerique, 0 sinon.
*/

int     ft_isalnum(int c)
{
    return (c > 47 && c < 58);
}