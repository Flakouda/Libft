/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 16:45:56 by florientako       #+#    #+#             */
/*   Updated: 2018/05/06 17:12:48 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Retourne 1 si l'int correspond a un charactere alphabetique, 0 sinon.
*/

int     ft_isaplha(int c)
{
    return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}