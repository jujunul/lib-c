/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:15:03 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/21 16:21:30 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*truc;

	if (!(truc = (t_list*)malloc(sizeof(t_list) * content_size)))
		return (NULL);
	if (!content)
	{
		truc->content = NULL;
		truc->content_size = 0;
		truc->next = NULL;
	}
	else
	{
		truc->content = (void *)content;
		truc->content_size = content_size;
		truc->next = NULL;
	}
	return (truc);
}
