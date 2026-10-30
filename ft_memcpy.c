/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 20:39:16 by fanidi            #+#    #+#             */
/*   Updated: 2026/10/28 20:32:54 by fanidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	unsigned char *d;
	unsigned char *s;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dest;

}
