/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handelers_cs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahel <hayat.ahel@learner.42.tech>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 08:14:52 by hahel             #+#    #+#             */
/*   Updated: 2025/12/22 13:09:16 by hahel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handles_c(int c)
{
	write(1, &c, 1);
	return (1);
}

int	handles_s(char *s)
{
	int	i;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
			i++;
	}
	return (i);
}
