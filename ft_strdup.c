/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:50:07 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/19 15:59:28 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int len;
	char *cp;

	len = ft_strlen(s1);
	if (!(cp = malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_strcpy(cp, s1);
	return (cp);
}
