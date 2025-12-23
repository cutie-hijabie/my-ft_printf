/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handles_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahel <hayat.ahel@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 17:52:58 by hahel             #+#    #+#             */
/*   Updated: 2025/12/22 15:28:30 by hahel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_fdpu(unsigned int n, int fd);

static int	count_digitsu(unsigned int n);

int	handles_u(unsigned int n)
{
	ft_putnbr_fdpu(n, 1);
	return (count_digitsu(n));
}
static int	count_digitsu(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static void	ft_putnbr_fdpu(unsigned int n, int fd)
{
	char	c;

	if (n == 0)
		write(1, "0", 1);
	if (n >= 10)
		ft_putnbr_fdpu(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}