/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handelers_cs%.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahel <hayat.ahel@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 08:14:52 by hahel             #+#    #+#             */
/*   Updated: 2025/12/18 11:17:42 by hahel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_c(va_list args)
{
	char	c;

	c = va_arg(args, int);
	if (write(1, &c, 1) == 1)
		return (1);
	return (-1);
}

int	handle_s(va_list args)
{
	char	*s;
	int	i;

	s = va_arg(args, char*);
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (write(1, &s[i], 1) == 1)
			i++;
		else
			return (-1);
	}
	return (i);
}
