/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 18:58:28 by florientako       #+#    #+#             */
/*   Updated: 2018/05/05 18:59:46 by florientako      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
    Libere la memoire du lien et de tout les liens suivants.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *newlst;
	t_list *nextlst;

	newlst = *alst;
	while (newlst)
	{
		nextlst = newlst->next;
		del(newlst->content, newlst->content_size);
		free(newlst);
		newlst = nextlst;
	}
	*alst = NULL;
}