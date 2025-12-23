/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handles_X.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahel <hayat.ahel@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:05:27 by hahel             #+#    #+#             */
/*   Updated: 2025/12/22 13:04:51 by hahel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digitsX(unsigned int n);

static void	ft_putnbr_fdpX(unsigned int n, int fd);

int	handels_X(unsigned int n)
{
	ft_putnbr_fdpX(n, 1);
	return (count_digitsX(n));
}
static int	count_digitsX(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

static void	ft_putnbr_fdpX(unsigned int n, int fd)
{
	char	c;
	const char	*hex = "0123456789ABCDEF";

	if (n >= 16)
		ft_putnbr_fdpX(n / 16, fd);
	c = hex[n % 16];
	write(fd, &c, 1);
}
