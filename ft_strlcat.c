/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <juthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 18:36:14 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/19 10:42:31 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int test;
	unsigned int i;

	i = 0;
	test = 0;
	while (dest[i])
		i++;
	while (test < size - 1 && src[test])
	{
		dest[i] = src[test];
		i++;
		test++;
	}
	dest[i] = '\0';
	return (i);
}
