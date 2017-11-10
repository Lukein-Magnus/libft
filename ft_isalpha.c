/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimurta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 05:54:07 by vimurta           #+#    #+#             */
/*   Updated: 2017/11/07 06:03:26 by vimurta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}

static int	ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}

int			ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
