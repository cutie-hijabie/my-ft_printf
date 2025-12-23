/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahel <hayat.ahel@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 06:32:18 by hahel             #+#    #+#             */
/*   Updated: 2025/12/22 17:43:31 by hahel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int parser(const char format, va_list *args);

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
			p += parser(format[i], &args);
		}
		else
			if (write(1, &format[i], 1))
				p++;
		i++;
	}
	va_end(args);
	return (p);
}

static int parser(const char format, va_list *args)
{
	if (format == 'c')
		return (handles_c(va_arg(*args, int)));
	else if (format == 's')
		return (handles_s(va_arg(*args, char*)));
	else if (format == 'd' || format == 'i')
		return (handles_di(va_arg(*args, int)));
	else if (format == 'x')
		return (handles_x(va_arg(*args,unsigned int)));
	else if (format == 'X')
		return (handels_X(va_arg(*args,unsigned int)));
	else if (format == 'p')
		return (handles_p(va_arg(*args,void *)));
	else if (format == 'u')
		return (handles_u(va_arg(*args,unsigned int)));
	else if (format == '%')
	{
			write(1, "%", 1);
			return (1);
	}
	else
		return (-1);
}
