/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:28:20 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/08 08:11:38 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int		i;
	char	d;

	i = ft_strlen(s);
	d = c < 128 ? (char)c : 0;
	while (i >= 0)
	{
		if (s[i] == d)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
