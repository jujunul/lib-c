/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 12:57:47 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/20 13:01:43 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void *mem;
	size_t i;

	i = 0;
	if (!(mem = malloc(size)))
		return (NULL);
	while (i < size)
		mem[i++] = 0;
	return (mem);
}
