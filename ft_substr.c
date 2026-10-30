/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 00:53:52 by fanidi            #+#    #+#             */
/*   Updated: 2026/10/29 21:06:06 by fanidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i = 0;
	size_t	slen = 0;
	size_t sublen;

	if(!s)
		return NULL;

	while(s[slen])
		slen++;

	if(start >= slen)
		sublen = 0;
	else if(len > slen - start)
		sublen = slen - start;
	else
		sublen = len;

	char *sub = malloc((sublen + 1) * sizeof(char));

	if(!sub)
		return NULL;

	while(i < sublen)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return sub;
}

int main(void)
{
	char *s = "hello";
	int start = 4;
	size_t len = 5;
	char *res = ft_substr(s, start, len);
	printf("%s", res);
	free(res);
}
