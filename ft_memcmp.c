/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 00:37:33 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/10 03:23:37 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef unsigned char unch_t;

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unch_t *)s1)[i] == ((unch_t *)s2)[i])
		i++;
	return (((unch_t *)s1)[i] - ((unch_t *)s2)[i]);
}
