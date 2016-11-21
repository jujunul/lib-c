/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:06:37 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/20 13:10:19 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char		*new;

	if (!(new = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(new, size);
	return (new);
}
