/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 21:55:16 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/10 07:46:53 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t  i;
	size_t  j;
	
	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i] == s2[j] && i < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)s1 + (i - j));
			j++;
			i++;
		}
		i = i - j;
		i++;
	}
	return (NULL);
}
