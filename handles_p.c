/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handles_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahel <hayat.ahel@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:16:12 by hahel             #+#    #+#             */
/*   Updated: 2025/12/22 17:53:14 by hahel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digitsp(uintptr_t n);

static void	ft_putnbr_fdp(uintptr_t n, int fd);

int	handles_p(void *n)
{
	uintptr_t	d;

	d = (uintptr_t)n;
	ft_putnbr_fdp(d, 1);
	return (count_digitsp(d) + 2);
}

static int	count_digitsp(uintptr_t n)
{
	int	i;

	i = 0;
	if (!n)
	return (6);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

static void	ft_putnbr_fdp(uintptr_t n, int fd)
{
	char	c;
	const char	*hex = "0123456789abcdef";

	if (!n)
	{
		write(1, "(nil)", 6);
	}
	if (n != 0)
		ft_putnbr_fdp(n / 16, fd);
	c = hex[n % 16];
	write(1, "0x", 2);
	write(fd, &c, 1);
}