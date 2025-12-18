/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahel <hayat.ahel@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 06:32:18 by hahel             #+#    #+#             */
/*   Updated: 2025/12/18 11:17:42 by hahel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	p;

	i = 0;
	p = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if(format[i] == '%')
		{
			i++;
			p += parser(format[i], args);
		}
		else
			if (write(1, &format[i], 1))
				p++;
		i++;
	}
	va_end(args);
	return (p);
}
static int parser(const char format, va_list args)
{
	if (format == 'c')
		return (handels_c(args));
	else if (format == 's')
		return ();
	else if (format == 'd' || format == 'i')
		return ();
	else if (format == 'x')
		return ();
	else if (format == 'X')
		return ();
	else if (format == 'p')
		return ();
	else if (format == 'u')
		return ();
	else if (format == '%')
	{
		if (write(1, '%', 1))
			return (1);
		else
			return (-1);
	}
	else
		return (-1);
}
