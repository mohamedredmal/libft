/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 22:19:11 by fanidi            #+#    #+#             */
/*   Updated: 2026/11/06 22:21:44 by fanidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	n;
	int		sign;

	sign = 1;
	n = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		if (n > (LONG_MAX - (*nptr - '0')) / 10)
		{
			if (sign == 1)
				return (-1);
			if (sign == -1)
				return (0);
		}
		n = n * 10 + (*nptr++ - '0');
	}
	return ((int)(sign * n));
}
