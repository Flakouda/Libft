/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 17:57:17 by florientako       #+#    #+#             */
/*   Updated: 2018/05/14 10:47:19 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Ecris un int n sur le file descriptor.
*/

void        ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
        return ;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    n > 9 ? ft_putnbr_fd(n / 10, fd) : 0;
    ft_putchar_fd(n % 10 + 48, fd);
}