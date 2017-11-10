/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 21:45:35 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/10 09:07:00 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i] == s2[j] && s2[j])
		{
			if (s2[j + 1] == '\0')
				return ((char *)s1 + (i - j));
			j++;
			i++;
		}
		i = i - j;
		i++;
	}
	return (NULL);
}
