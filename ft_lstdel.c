/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:42:34 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/21 16:02:49 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	tmp = *alst;
	while (tmp->next != NULL)
	{
		del(tmp->content, tmp->content_size);
		free(*alst);
		*tmp = *tmp->next;
	}
	*alst = NULL;
}
