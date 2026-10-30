/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:16:39 by fanidi            #+#    #+#             */
/*   Updated: 2026/10/30 20:07:10 by fanidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int in_set(char c, const char  *set)
{
	size_t i;

	i = 0;

	while(set[i])
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t len1;
	size_t i;
	char *trim;

	if(!s1 || !set)
		return (NULL);

	len1 = 0;
	while(s1[len1])
		len1++;

	start = 0;
	while(s1[start] && in_set(s1[start], set))
		start++;

	end = len1;
	while(end > start && in_set(s1[end - 1], set))
		end--;

	trim = malloc(end - start + 1);
	if(!trim)
		return (NULL);

	i = 0;
	while(start < end)
	{
		trim[i] = s1[start];
		start++;
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
int main(void)
{
	char *s1 = "abchelloabc";
	char  *set = "abc";
	char *res = ft_strtrim(s1, set);
	printf("%s", res);
	free(res);
}
