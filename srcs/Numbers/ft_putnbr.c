/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 17:53:43 by florientako       #+#    #+#             */
/*   Updated: 2018/05/14 10:47:19 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Ecris un int n sur la sortie standard.
*/

void        ft_putnbr(int n)
{
    if (n == -2147483648)
    {
        ft_putstr("-2147483648");
        return ;
    }
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    n > 9 ? ft_putnbr(n / 10) : 0;
    ft_putchar(n % 10 + 48);
}