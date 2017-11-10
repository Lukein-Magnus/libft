/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 22:49:51 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/10 07:16:38 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst,char *src, size_t n)
{
	size_t	i;
	size_t	j;

	if (n < ft_strlen(dst))
		return (n + ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && i + j < n - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
