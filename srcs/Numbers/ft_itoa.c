/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 17:42:54 by florientako       #+#    #+#             */
/*   Updated: 2018/05/14 10:47:21 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Convertis un int en char.
*/

static char     *ft_convert(char *str, long nb, int i, int neg)
{
    str[i--] = 0;
    if (neg == 1)
    {
        str[0] = '-';
        nb *= -1;
    }
    if (!nb)
        str = "0";
    while (nb)
    {
        str[i] = (nb % 10) + 48;
        i--;
        nb /= 10;
    }
    return (str);
}

char            *ft_itoa(int n)
{
    int     i;
    long    j;
    int     neg;
    char    *str;

    if (n == 0 || !n)
    {
        str = (char *)malloc(sizeof(* str) * 2);
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    j = (long)n;
    i = 0;
    neg = 0;
    n <= 0 ? neg++ : 0;
    while (n && i++ > -1)
        n /= 10;
    str = (char *)malloc(sizeof(* str) * (i + neg + 1));
    if (!str)
        return (NULL);
    return (ft_convert(str, j, i + neg, neg));
}