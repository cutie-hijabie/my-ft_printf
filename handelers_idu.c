/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handelers_idu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahel <hayat.ahel@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 08:14:52 by hahel             #+#    #+#             */
/*   Updated: 2025/12/18 11:17:50 by hahel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_d(va_list args)
{
	int	d;
	char	*s;
	int	len;

	d = va_arg(args, int);
	s = ft_itoa(d);
	len = (int)ft_strlen(s);
	if (write(1, s, len) == len)
	{
		free(s);
		return (len);
	}
	free(s);
	return (-1);
}

int	handle_u(va_list args)
{
	unsigned int	d;
	char	*s;
	int	len;

	d = va_arg(args, unsigned int);
	s = ft_un_itoa(d);
	len = (int)ft_strlen(s);
	if (write(1, s, len) == len)
	{
		free(s);
		return (len);
	}
	free(s);
	return (-1);
}

static int	count_digits(unsigned int n)
{
	int	i;

	i = 0;
	if (n = 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*fill_digits(char *s, unsigned int n, int len)
{
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	while (n > 0)
	{
		len--;
		s[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}

static char	*ft_un_itoa(unsigned int n)
{
	int		len;
	char	*s;

	len = count_digits(n);
	s = malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[len] = '\0';
	s = fill_digits(s, n, len);
	return (s);
}