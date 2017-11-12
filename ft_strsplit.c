/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 22:55:41 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/12 08:59:20 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nb_words(char *s, char c)
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
	char	*p1;
	char	*p2;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	p1 = ft_strdup((char *)s);
	if (!(tab = (char **)malloc(sizeof(char *) * ft_nb_words(p1, c) + 1)))
		return (NULL);
	while (i < ft_nb_words((char *)s, c))
	{
		while (*p1 == c)
			p1++;
		p2 = p1;
		while (*p2 != c)
			p2++;
		tab[i] = ft_strnew((char *)p2 - (char *)p1 + 1);
		tab[i] = ft_strncpy(tab[i], (char *)p1, (char *)p2 - (char *)p1);
		p1 = p2;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
