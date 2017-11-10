/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 00:51:19 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/08 08:09:17 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	if (!(s = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = '\0';
		i++;
	}
	s[i] = '\0';
	return (s);
}
