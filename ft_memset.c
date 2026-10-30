/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 19:36:59 by fanidi            #+#    #+#             */
/*   Updated: 2026/10/27 20:27:52 by fanidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t i = 0;
	unsigned char *p = s;

	while(i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	p[i] = '\0';
	return s;

}
int main(void)
{
	size_t n = 0;
	char s[n];
	int c = 126;

	char *res = ft_memset(s, c, n);
	printf("%s", res);
}
