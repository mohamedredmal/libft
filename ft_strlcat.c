/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohfanid <mohfanid@tudent.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:10:30 by oben-el           #+#    #+#             */
/*   Updated: 2026/11/06 23:28:58 by mohfanid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	if (size == 0)
		return (slen);
	dlen = ft_strlen(dst);
	if (dlen >= size)
		return (size + slen);
	dst = dst + dlen;
	size = size - dlen;
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (dlen + slen);
}
