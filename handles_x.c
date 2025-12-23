/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handles_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahel <hayat.ahel@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:22:06 by hahel             #+#    #+#             */
/*   Updated: 2025/12/22 13:04:27 by hahel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digitsx(unsigned int n);

static void	ft_putnbr_fdx(unsigned int n, int fd);

int	handles_x(unsigned int n)
{
	ft_putnbr_fdx(n, 1);
	return (count_digitsx(n));
}
static int	count_digitsx(unsigned int n)
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

static void	ft_putnbr_fdx(unsigned int n, int fd)
{
	char	c;
	const char	*hex = "0123456789abcdef";

	if (n >= 16)
		ft_putnbr_fdx(n / 16, fd);
	c = hex[n % 16];
	write(fd, &c, 1);
}
