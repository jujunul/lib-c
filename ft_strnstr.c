/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 10:37:10 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/20 11:41:14 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (!little)
		return (big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return (big + i);
	}
	return (NULL);
}
