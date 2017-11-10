/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 02:10:28 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/08 08:14:36 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isws(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	char			*new;
	unsigned int	start;
	size_t			len;

	start = 0;
	len = 0;
	while (ft_isws(*s))
	{
		start++;
		s++;
	}
	while ((!ft_isws(s[len])) && s[len])
		len++;
	new = ft_strsub(s, start, len);
	return (new);
}
