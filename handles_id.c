/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handles_id.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahel <hayat.ahel@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 08:14:52 by hahel             #+#    #+#             */
/*   Updated: 2025/12/22 13:10:20 by hahel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"


static void	ft_putnbr_fdp(int n, int fd);


static int	count_digits(int n);


int	handles_di(int n)
{
	ft_putnbr_fdp(n, 1);
	return (count_digits(n));
}
static int	count_digits(int n)
{
	int i;


	i = 0;
	if (n <= 0)
	i = 1;
	if (n == -2147483648)
	{
		return(11);
	}
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}


static void ft_putnbr_fdp(int n, int fd)
{
	char	c;


	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fdp(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}