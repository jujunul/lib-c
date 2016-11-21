/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:12:19 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/21 11:57:06 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_nbstr(char *str, char c)
{
	int i;
	int nbstr;

	i = 0;
	nbstr = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			nbstr++;
		i++;
	}
	return (nbstr);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		lenstr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_nbstr(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		lenstr = 0;
		while (s[i] != c && s[i])
		{
			lenstr++;
			i++;
		}
		if (lenstr != 0)
		{
			tab[j] = ft_strsub(s, i, lenstr);
			j++;
		}
		i++;
	}
	return (tab);
}
