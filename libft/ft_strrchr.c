/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 10:51:56 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/21 11:40:45 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int i;
	int last;

	last = -1;
	i = ft_strlen((char*)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			last = i;
		i--;
	}
	if (last == -1)
		return (NULL);
	return (((char*)(s + last)));
}
