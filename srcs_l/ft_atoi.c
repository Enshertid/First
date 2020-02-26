/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:12:17 by dbendu            #+#    #+#             */
/*   Updated: 2020/02/26 16:56:05 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

__int128_t		ft_atoi(const char *str)
{
	__int128_t	res;
	short int	sign;

	while (ft_isspace(*str))
		++str;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	res = 0;
	while (ft_isdigit(*str))
		res = res * 10 + *str++ - '0';
	return (res * sign);
}
