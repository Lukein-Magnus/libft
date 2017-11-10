/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 01:05:09 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/10 08:13:53 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = (f)(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
