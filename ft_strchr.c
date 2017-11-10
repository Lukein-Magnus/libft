/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:24:45 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/10 07:21:51 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	d;

	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s) + 1);
	i = 0;
	d = c < 128 ? (char)c : 0;
	while (s[i])
	{
		if (s[i] == d)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
