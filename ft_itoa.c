/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 02:24:28 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/08 07:05:26 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(int n)
{
	int		i;

	i = 0;
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	i = ft_nblen(n);
	if (!(s = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	s[i + 1] = '\0';
	while (i >= 0)
	{
		s[i] = '0' + (char)(n % 10);
		n = n / 10;
		i--;
	}
	return (s);
}
