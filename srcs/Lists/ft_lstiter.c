/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 19:03:41 by florientako       #+#    #+#             */
/*   Updated: 2018/05/05 19:04:15 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Applique la fonction a tout les maillons de la liste.
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst && f)
	{
		f(lst);
		lst = lst->next;
	}
}