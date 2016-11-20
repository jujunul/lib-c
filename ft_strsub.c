/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:16:22 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/20 16:24:58 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;
	int				j;

	i = start;
	j = 0;
	if (!(new = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while ((i - len) < start)
	{
		new[j] = s[i];
		i++;
		j++;
	}
	return (new);
}
