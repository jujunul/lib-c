/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:38:18 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/20 13:44:10 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_strmap (char const *s, char (*f)(char))
{
	size_t		len;
	char		*new;
	int			i;

	len = ft_strlen(s);
	if (!(new = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
