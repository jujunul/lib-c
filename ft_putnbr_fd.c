/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:10:11 by juthierr          #+#    #+#             */
/*   Updated: 2016/11/21 13:12:00 by juthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar_fd('-');
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
		ft_putnbr_fd(n / 10);
	ft_putchar_fd((n % 10) + '0');
}
