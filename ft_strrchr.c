/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 13:09:33 by fanidi            #+#    #+#             */
/*   Updated: 2026/10/25 14:23:47 by fanidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strrchr(char *s, int c)
{
	size_t i = 0;
	char *last = NULL;

	while(s[i] != '\0')
	{
		if(s[i] == c)
			last = &s[i];
		i++;
	}
	return last;
	if(s[i] == c)
		return &s[i];

}
int main(void)
{
	char *s = "hellol";
	int c = 'a';
	char *res = ft_strrchr(s, c);
	printf("res : %s", res);
}
