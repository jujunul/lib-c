/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:24:04 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/21 15:58:20 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *truc;

	if (!(truc = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	truc = f(lst);
	lst = lst->next;
	while (lst->next != NULL)
	{
		if (!(new = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		new = f(lst);
		lst = lst->next;
		truc->next = new;
	}
	return (truc);
}
