/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:43:45 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/23 11:03:51 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	size_t	len;

	if (s)
	{
		len = (ft_strlen((char*)s) - 1);
		i = 0;
		while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
			i++;
		while (s[len] == ' ' || s[len] == ',' || s[len] == '\n' || s[len] == '\t')
			len--;
		if (s[i] == '\0')
			return ((char *)&s[i]);
		return (ft_strsub(s, i, (len - i + 1)));
	}
	return (NULL);
}
