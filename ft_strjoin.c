/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:37:10 by fanidi            #+#    #+#             */
/*   Updated: 2026/10/29 22:59:49 by fanidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len1 = 0;
	size_t len2 = 0;
	size_t i;
	size_t j;
	char *str;

	if(!s1 || !s2)
		return NULL;
	while(s1[len1])
		len1++;
	while(s2[len2])
		len2++;

	str = malloc((len1 + len2 + 1) * sizeof(char));
	if(!str)
		return NULL;
	i = 0;

	while(i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;

	while(j < len2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return str;
}
int main(void)
{
	char *s1 = "hello";
	char *s2 = "mohamed";
	char *res = ft_strjoin(s1, s2);
	printf("%s", res);
	free(res);
}
