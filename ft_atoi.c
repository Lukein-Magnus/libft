/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:05:16 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/10 07:51:10 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_iswhitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int			ft_atoi(char const *str)
{
	int			i;
	long long	nb;
	int			sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -sign;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit((int)str[i]))
	{
		nb = nb * 10 + ((int)str[i] - '0');
		i++;
	}
	return ((int)nb * sign);
}
