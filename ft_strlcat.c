/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 12:00:53 by fanidi            #+#    #+#             */
/*   Updated: 2026/10/24 17:27:20 by fanidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlcat(char dst[], const char src[], size_t dsize)
{
	size_t len_src = 0;
	size_t len_dst = 0;
	size_t i = 0;
	size_t j = 0;
	
	while(dst[len_dst] != '\0' && len_dst < dsize)
	{
		len_dst++;
	}
	while(src[len_src] != '\0')
	{
		len_src++;
	}
	if(len_dst == dsize)
	{
		return len_src + dsize;
	}
	j = len_dst;
	while(src[i] != '\0' && j < dsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';

	return len_dst + len_src;
}
int main(void)
{
	char src[] = "medo";
	size_t dsize = 5;
	char dst[] = "hi";
	size_t result = ft_strlcat(dst, src, dsize);

	printf("result : %s", dst);
	printf("dst : %zu", result);
}
