/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 06:18:18 by juthierr          #+#    #+#             */
/*   Updated: 2017/03/24 17:53:45 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *old, int oldsize, int newsize)
{
	void *nex;

	nex = (void *)malloc(newsize);
	if (nex == NULL)
	{
		return (NULL);
	}
	if (old != NULL)
	{
		ft_bzero(nex, newsize);
		ft_memcpy(nex, old, (size_t)oldsize);
		free(old);
	}
	return (nex);
}
