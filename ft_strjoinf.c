/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 06:47:03 by juthierr          #+#    #+#             */
/*   Updated: 2017/03/24 17:53:24 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoinf(char *s1, char *s2)
{
	char *new;

	if (s1 && s2)
	{
		if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(s1) +
			ft_strlen(s2) + 1))))
			return (NULL);
		ft_strcpy(new, s1);
		ft_strcat(new, s2);
		free(s1);
		free(s2);
		return (new);
	}
	return (NULL);
}
