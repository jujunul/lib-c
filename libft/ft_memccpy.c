/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 11:17:59 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/21 16:52:14 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sr;
	unsigned char	x;

	dest = (unsigned char*)dst;
	sr = (unsigned char*)src;
	x = (unsigned char)c;
	i = 0;
	while (i <= n)
	{
		if ((*dest++ = *sr++) == x)
			return (dest);
		i++;
	}
	return (NULL);
}
