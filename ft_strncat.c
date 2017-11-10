/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:22:31 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/10 01:46:52 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncat(char *dest, char const *src, size_t n)
{
	size_t  i;
	size_t  j;

	j = 0;
	while (dest[j])
		j++;
	i = 0;
	while (src[i] && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
