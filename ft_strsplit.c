/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:12:19 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/23 12:10:58 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_countstr(char const *s, char c)
{
	int i;
	int nbstr;

	i = 0;
	nbstr = 0;
	while(s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			nbstr++;
		}
		i++;
	}
	return (nbstr);
}

char		**ft_strsplit(char const *s, char c)
{
	if (s && c)
	{
	
	}
	return (NULL);
}
