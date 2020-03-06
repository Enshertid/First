/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 13:53:45 by ymanilow          #+#    #+#             */
/*   Updated: 2020/03/06 12:58:25 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_is_valid(char c)
{
	const char		*dec = "0123456789";
	const char		*low = "abcdef";
	const char		*hight = "ABCDEF";
	int				i;

	i = -1;
	if (ft_tolower(c) != c)
	{
		while (low[++i])
			if (low[i] == c)
				return (10 + i);
	}
	else if (ft_toupper(c) != c)
	{
		while (hight[++i])
			if (hight[i] == c)
				return (10 + i);
	}
	else
		while (dec[++i])
			if (dec[i] == c)
				return (i);
	return (20);
}

__int128_t			ft_atoi_base(const char *str, int base)
{
	__int128_t		res;
	int				sight;

	while (ft_isspace(*str))
		str++;
	sight = *str == '-' ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	res = 0;
	while (ft_is_valid(*str) != 20)
		res = res * base + ft_is_valid(*str++);
	return (res * sight);
}
