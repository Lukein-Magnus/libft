/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 00:45:52 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/08 07:07:04 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
void	*ft_memalloc(size_t size)
{
	void	*s;
	size_t	i;

	if (!(s = malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		((char *)s)[i] = 0;
		i++;
	}
	return (s);
}
