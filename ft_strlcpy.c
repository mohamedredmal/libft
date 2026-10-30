/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:14:12 by fanidi            #+#    #+#             */
/*   Updated: 2026/10/23 11:35:47 by fanidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcpy(char dst[], const char *src, size_t dsize)
{
	size_t i = 0;
	size_t j = 0;
	if(dsize > 0)
	{
		while(i < dsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while(src[j] != '\0')
	{
		j++;
	}
	return j;
}
int main(void)
{
	char src[] = "hi";
	size_t dsize = 3;
	char dst[] = "hello";
	size_t result = ft_strlcpy(dst, src, dsize);

	printf("result: %zu ", result);
	printf("dst: %s ", dst);
}
