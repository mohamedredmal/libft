/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohfanid <mohfanid@tudent.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:27:11 by oben-el           #+#    #+#             */
/*   Updated: 2026/11/06 23:28:42 by mohfanid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(s);
	dup = malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (NULL);
	ft_memmove(dup, s, size + 1);
	return (dup);
}
