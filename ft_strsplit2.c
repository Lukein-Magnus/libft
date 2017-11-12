/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 22:55:41 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/12 08:45:35 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbw(char *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && !s[i + 1]))
			n++;
		i++;
	}
	return (n);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * ft_nbw((char *)s, c) + 1)))
		return (NULL);
	while (i < ft_nbw((char *)s, c))
	{
		while (s[j] == c)
			j++;
		k = j;
		while (s[k] != c)
			k++;
		tab[i] = ft_strnew(k - j + 1);
		tab[i] = ft_strncpy(tab[i], (char *)s + j, k - j);
		j = k;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
