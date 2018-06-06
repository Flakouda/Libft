/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 19:04:37 by florientako       #+#    #+#             */
/*   Updated: 2018/05/05 19:10:23 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Applique la fonction sur tout les maillons de la liste, renvoie la nouvelle liste.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *tmp;

	if (!lst)
		return (NULL);
	list = f(lst);
	lst = lst->next;
	tmp = list;
	while (lst)
	{
		list->next = f(lst);
		lst = lst->next;
		list = list->next;
	}
	return (tmp);
}