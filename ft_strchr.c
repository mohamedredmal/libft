/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 12:18:33 by fanidi            #+#    #+#             */
/*   Updated: 2026/10/25 13:07:07 by fanidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(char *s, int c)
{

	while(*s)
	{
		if(*s == c)
			return s;
		s++;
	}
	if(c == '\0' && *s == c)
		return s;
	return NULL;
}

int main(void)
{
        char *s = "hello";
        int c = 'l';
        char *res = ft_strchr(s, c);

        printf("res : %s", res);
}

