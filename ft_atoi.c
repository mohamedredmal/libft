/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:30:48 by fanidi            #+#    #+#             */
/*   Updated: 2026/10/26 19:32:31 by fanidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_atoi(const char *s)
{
	size_t i = 0 ;
	int  sign = 1;
	int res = 0;

	while(s[i] && ((s[i] >= 9 &&s[i] <= 13 ) || s[i] == 32))
		i++;
	while(s[i] && (s[i] == '+' || s[i] == '-'))
	{
		if(s[i] == '-')
			sign *= -1;
		i++;
	}
	while(s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return res * sign;
}
int main(void)
{
	char *s = "-3456999999997";
	int res = ft_atoi(s);
	printf("%d", res);
}
