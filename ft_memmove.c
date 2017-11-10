/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 00:27:59 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/10 02:49:47 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	buf[4096];
	size_t	i;

	i = 0;
	while (i < n)
	{
		buf[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = buf[i];
		i++;
	}
	return (dest);
}
